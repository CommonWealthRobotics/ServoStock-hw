use <Parameters.scad>
use <BearingCap.scad>	
use <Clips.scad>	
use <StructuralBearingMount2.scad>
use <Pulley.scad>
use <Slider.scad>
use <IdlerBearingPlug.scad>
use <IdlerBearingClip.scad>
use <Rod.scad>
use <StructuralFeet.scad>


translate([60,-90,0]){
	rotate([0,0,90]){
		translate([0,13,0])
			DeltaFreeArm();
		DeltaFreeArm();
	}
}
//rotating the module, as it would be rotated for printing
translate([0,0, MotorBracketHeight()])
{
	rotate([0,180,90])
	{
		StructuralFeet();
	}
}
translate([0,50,0])
	StructuralBearingMount(3);

translate([-40,70,0]){
	servo_pulley(true,true);
}

translate([-55,-15,0]){
	rotate([0,0,90])
		Slider(false, 1);
}
translate([0,-65,0]){
	IdlerBearingPlug();
	IdlerBearingClip();
}

translate([-100,-100,-1.1]){
	//#cube([200,200,1]);
}
