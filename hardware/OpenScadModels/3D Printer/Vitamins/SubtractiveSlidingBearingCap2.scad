use <../Tolerance.scad>
use <../Parameters.scad>
use <../Slider.scad>
use <BallBearing.scad>
use <PlasticScrew.scad>

module BearingCap()
{
translate([-PlasticWidth()/2-BallBearingHeight()/2,-PlasticWidth()/2,-PlasticWidth()*1.25-1.5])
{
	union()
	{
	difference()
	{
		union()
		{
			translate([-3dPrinterTolerance(),0,1])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*2, PlasticWidth()+3dPrinterTolerance()*2, SliderHeight()+PlasticWidth()]);
			}
			translate([-3dPrinterTolerance(),PlasticWidth()+3dPrinterTolerance(),1])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*2, PlasticWidth()*2,PlasticWidth()]);
			}
			translate([-3dPrinterTolerance(),-BallBearingHeight()/2,PlasticWidth()*.25])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*2, BallBearingDiam()/4+PlasticWidth()*2,BallBearingDiam()+PlasticWidth()]);
			}
			translate([-3dPrinterTolerance(),-PlasticWidth(),BallBearingDiam()/2+PlasticWidth()*1.25])
			{
				rotate([0,90,0])
				{
					cylinder(BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*2, BallBearingDiam()/2+PlasticWidth(), BallBearingDiam()/2+PlasticWidth());
				}
			}
		}
		translate([-1,-BallBearingHeight()/2,PlasticWidth()*1.25+1+3dPrinterTolerance()])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth(),BallBearingDiam()-PlasticWidth()/4-3dPrinterTolerance()-1]);
			}
		translate([-1,-BallBearingHeight()/2+PlasticWidth()*2-1+3dPrinterTolerance()*3,BallBearingDiam()])
			{
				cube([BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2+PlasticWidth(),BallBearingDiam()-PlasticWidth()/4-1]);
			}
		translate([-1,-PlasticWidth(),SliderHeight()/2])
		{                                                                                                                                   
			rotate([0,90,0])
			{
				cylinder(BallBearingHeight()+PlasticWidth()+2, BallBearingDiam()/2-PlasticWidth()/6, BallBearingDiam()/2-PlasticWidth()/6);
			}
		}
	}
	translate([-3dPrinterTolerance(),PlasticWidth()*2-3dPrinterTolerance(),PlasticWidth()-3dPrinterTolerance()])
			{
				cube([BallBearingHeight()+PlasticWidth()+3dPrinterTolerance()*2, PlasticWidth()+3dPrinterTolerance()*2,PlasticWidth()*2+3dPrinterTolerance()*2]);
			}
			translate([PlasticWidth()/2,-BallBearingDiam()/2+PlasticWidth(),SliderHeight()/2])
		{
			rotate([0,90,0])
			{
				BallBearing();
			}
		}
translate([PlasticWidth()/2+ScrewHeadDiameter()/2,-1, SliderHeight()+PlasticWidth()/4])
		{
			rotate([90,0,0])
			{
				union()
				{
					screw();
					cylinder(BallBearingDiam()/2, ScrewHeadDiameter()/2, ScrewHeadDiameter()/2);
				}
			}
		}
}
}
}

//rotate([0,90,0])
//%BallBearing();

BearingCap();