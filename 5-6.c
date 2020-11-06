/*
 * This program prints n^k
 */

#include <stdio.h>

double RaiseRealToPower(float n, int k);

main()
{
	int k;
	float n;

	printf("This program calculates and prints n^k.\n");

	printf("Enter n: ");
	scanf(" %f", &n);

	printf("Enter k: ");
	scanf(" %d", &k);

	printf("%g^%d = %g\n", n, k, RaiseRealToPower(n, k));
	
}

double RaiseRealToPower(float n, int k)
{
	int i;
	double power;

    power = 1;

	for(i=1 ; i <= abs(k) ; i++) {
		power *= n;
	}

	if ( k>=0 ) {
		return (power);
	}
	else {
		return (1/power);
    }
}