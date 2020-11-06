/* This program display Fibonacci sequence */

#include <stdio.h>

main()
{
	int limit, i, f1, f2, f3;

	f1 = 0;
	f2 = 1;

	printf("Until What number(more than 3):");
	scanf(" %d", &limit);

	printf("F(0) = 0\n");
	printf("F(1) = 1\n");

	for ( i=2 ; i <= limit ; i++ ) {
		f3 = f1 + f2;
		printf("F(%d) = %d\n", i, f3);
		f1 = f2;
		f2 = f3;
	}
}