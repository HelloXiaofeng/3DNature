/*******************************************************************************
NAME                             EQUIRECTANGULAR 

PURPOSE:        Transforms input Easting and Northing to longitude and
                latitude for the Equirectangular projection.  The
                Easting and Northing must be in meters.  The longitude
                and latitude values will be returned in radians.

PROGRAMMER              DATE
----------              ----
T. Mittan               Mar, 1993

ALGORITHM REFERENCES

1.  Snyder, John P., "Map Projections--A Working Manual", U.S. Geological
    Survey Professional Paper 1395 (Supersedes USGS Bulletin 1532), United
    State Government Printing Office, Washington D.C., 1987.

2.  Snyder, John P. and Voxland, Philip M., "An Album of Map Projections",
    U.S. Geological Survey Professional Paper 1453 , United State Government
    Printing Office, Washington D.C., 1989.
*******************************************************************************/
#include "cproj.h"

// Initialize the Equirectangular projection
long Projectoid::equiinvint(
double r_maj,					// major axis
double center_lon,				// center longitude
double lat1,					// latitude of true scale
double false_east,				// x offset in meters
double false_north)				// y offset in meters
{

// Place parameters in static storage for common use
r_major = r_maj;
lon_center = center_lon;
lat_origin = lat1;
false_northing = false_north;
false_easting = false_east;

// Report parameters to the user
ptitle("EQUIRECTANGULAR"); 
radius(r_major);
cenlonmer(lon_center);
origin(lat_origin);
offsetp(false_easting, false_northing);
InverseOK[WCS_PROJECTIONCODE_EQRECT] = 1;
InverseTransform = &Projectoid::equiinv;

return(OK);

}

/*===========================================================================*/

// Equirectangular inverse equations--mapping x,y to lat/long
long Projectoid::equiinv(
double x,						// (O) X projection coordinate
double y,						// (O) Y projection coordinate
double *lon,					// (I) Longitude
double *lat)					// (I) Latitude
{

// Inverse equations
x -= false_easting;
y -= false_northing;
*lat = y / r_major;
if (fabs(*lat) > HALF_PI)
	{
	p_error("Input data error", "equi-inv");
	return(174);
	}
*lon = adjust_lon(lon_center + x / (r_major * cos(lat_origin)));

return(OK);

}
