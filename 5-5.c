/*
 * This program print the table of powers of 2 from 0 to 10
 */

#include <stdio.h>

int RaiseIntToPower(int n, int k);

main()
{
	int i;

	for(i=0 ; i<=10 ; i++) {
		printf("2^%d = %d\n", i, RaiseIntToPower(2, i));
	}
}

int RaiseIntToPower(int n, int k)
{
	int i, power;

    power = 1;

	for(i=1 ; i<=k ; i++) {
		power *= n;
	}

    return(power);
}