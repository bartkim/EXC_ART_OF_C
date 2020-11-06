/*
 * This program prints out Pascal's Triangle.
 */

#include <stdio.h>

#define HIGHT 8

int factorial(int n);
int combination(int n, int k);

main()
{
	int i, j, k;

	for( i = 1 ; i <= HIGHT ; i++ ) {
		for ( j = HIGHT ; j >= i ; j-- ) {
			printf("   ");
		}
		for ( k = 1 ; k <= i; k++ ) {
			printf("%3d", combination(i-1, k-1));
            printf("   ");
		}
		printf("\n");
	} 	  
}

int factorial(int n)
{
	int product, i;

	product = 1;
	for ( i = 1 ; i <= n ; i++) {
		product *= i;
	}

	return (product);
}

int combination(int n, int k)
{
	return(factorial(n)/(factorial(k)*factorial(n-k)));
}