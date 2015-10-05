#include <math.h>
#include "GeoLib.h"

#define PI		3.141592653589793238
#define INV_PI		(1.0 / PI)
#define HALF_PI		(PI * 0.5)
#define TWO_PI		(PI * 2.0)
#define INV_TWO_PI	(1.0 / TWO_PI)
#define EPSLN	1.0e-10
#define R2D		57.2957795131				// Radian to Degree
#define D2R		1.745329251994328e-2		// Degree to Radian
#define S2R		4.848136811095359e-6		// D2R / 3600

#define OK		  0
#define ERROR	 -1
#define IN_BREAK -2

// Misc macros
#define SQUARE(x)				((x) * (x))	// x^2
#define CUBE(x)			  ((x) * (x) * (x))	// x^3
#define QUAD(x)		((x) * (x) * (x) * (x))	// x^4

#define GMAX(A, B)	((A) > (B) ? (A) : (B))		// assign maximum of a and b
#define GMIN(A, B)	((A) < (B) ? (A) : (B))		// assign minimum of a and b

#define IMOD(A, B)	((A) - (((A) / (B)) * (B)))	// Integer mod function

