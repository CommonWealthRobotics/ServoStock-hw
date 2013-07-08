use <../Parameters.scad>

function LinearBearingDiam() = 15 + 3dPrinterTolerance();
function LinearBearingInnerDiam() = 8.3 + 3dPrinterTolerance();
function LinearBearingHeight() = 24 + 3dPrinterTolerance();

module LinearBearing()
{
cylinder(LinearBearingHeight(), LinearBearingDiam()/2, LinearBearingDiam()/2, 0);
}


LinearBearing();