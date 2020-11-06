/* This program displays reverse digit of number */

#include <stdio.h>

main()
{
	int number, digit;

	printf("This program reverses the digits in an integer.\n");
	printf("Enter a positive integer:");
	scanf(" %d", &number);

	while ( number > 0 ) {
        digit = number % 10;
		number /= 10;
		printf("%d", digit);
	}
}
	    	