/* This program displays triangle */

#include <stdio.h>

#define hight 15

main()
{
	int i, j, k;

	for ( i = 1 ; i <= hight ; i++ ) {
		for ( j = 1 ; j <= hight-i ; j++ ) {
			printf(" ");
		}
		for ( k = 1 ; k <= 1+2*(i-1) ; k++ ) {
			printf("*");
		}
		printf("\n");
	}
}