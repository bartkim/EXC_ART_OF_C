/*
 * This program evaluates the cube-root.
 */

#include <stdio.h>
#include <math.h>

#define EPSILON 0.000001 

double cuberoot(double n);
int approximately_equal(double x, double y);
double min(double x, double y);

main()
{
	double n;

	printf("Enter the number: ");
	scanf(" %lf", &n);

	printf("The cube-root is %lf", cuberoot(n));
}


/*
 * function : cuberoot
 * usage : cube = cuberoot(n);
 * needed function : no
 *______________________________
 *
 * This function evaluates and returns cube_root of arguments.
 */

double cuberoot(double n)
{
	double g;

	if ( n == 0 ) return(0);

	g = n;
	while ( !approximately_equal(n, g*g*g)) {
		g = (g + n/g/g) / 2;
	}
	return(g);
}


/*
 * function : approximately_equal
 * usage : if ( approximately_equal ) ...
 * needed : min(), fabs() - math library
 * __________________________________________
 *
 * This function returns 1, if two values are approximately equal
 */
  
int approximately_equal(double x, double y)
{
	return ( (fabs(x-y) / min(fabs(x), fabs(y))) < EPSILON );
}


/*
 * function : min
 * usage : a = min(x, y);
 * needed : no
 * ___________________________________________
 *
 * This function returns smaller values of two numbers.
 */

double min(double x, double y)
{
	if ( x > y ) return(y);
	else return(x);
}
	
