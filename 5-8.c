/*
 * This program outputs the round of floating-point value.
 */

#include <stdio.h>

int round(float n); 

main()
{
	float n;

    printf("This program outputs the round of floating-point value\n");

	printf("Enter the floating-point value: ");
	scanf(" %f", &n);

	printf("The round of %g is %d\n", n, round(n));
}

int round(float n)
{
	int round;

	if ( n >= 0 ) {
		round = n + 0.5;
	}
	else {
		round = n - 0.5;
	}

	return (round);
}

