/*
 * This program tests approximately equal of two floating-point values.
 */

#include <stdio.h>
#include <math.h>

#define Epsilon 0.000001

int ApproximatelyEqual(float x, float y);
float min(float x, float y);

main()
{
	float x, y;

	printf("This program tests approximately equal of two floating-point values.\n");
	printf("Enter the value :");
	scanf("%f %f", &x, &y);

	if (ApproximatelyEqual(x, y)) {
		printf("Equal!!\n");
	}
	else {
		printf("NOT EQUAL!!");
	}
}

int ApproximatelyEqual(float x, float y)
{
	int equal;

	if ( (fabs(x-y) / min(fabs(x), fabs(y))) < Epsilon ) {
		return(1);
	}
	else {
		return(0);
	}
}

float min(float x, float y)
{
	if ( x > y ) {
		return(y);
	}
	else {
		return(x);
	}
}