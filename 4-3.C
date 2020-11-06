/* This program evaluates sum of N odd number from 1 */

#include <stdio.h>
 
main()
{
	int num, i, sum;

	printf("Input the number of the odd number :");
	scanf(" %d", &num);
	sum = 0;
	for ( i = 1 ; i <= 2*num ; i+=2) {
		sum += i;
	}
	printf("The answer is %d\n", sum);
}

