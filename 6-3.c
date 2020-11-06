/*
 * This program prints perfect numbers from 1 to 9999.
 */

#include <stdio.h>

int is_perfect(int n);

main()
{
	int i;

	for ( i = 1 ; i <= 9999 ; i++ ) {
		if ( is_perfect(i) ) {
			printf("%d is perfect number.\n", i);
		}
	}
}

/*
 * function : is_perfect
 * usage : if (is_perfect(n)) ...
 * needed function : no
 * _________________________________________
 *
 * This function returns 1, if the number is perfect number.
 */

int is_perfect(int n)
{
	int i, limit, sum;

	sum = 0;
    limit = n/2;

	for ( i = 1 ; i <= limit ; i++) {
		if ( n%i == 0 ) {
			sum += i;
		}
    }
    return ( sum == n );
}   	