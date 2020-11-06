/*
 * This function lists the prime number
 * using Eratosthenes's mathod.
 */

#include <stdio.h>

/***************************
 * limit number definition *
 ***************************/

#define LIMIT 500

/************************
 * function declaration *
 ************************/

void initial_data(char data[], int n);
void is_prime(char data[], int n);
void display(char data[], int n);

main()
{
	char prime[LIMIT+1];

	initial_data(prime, LIMIT);
	is_prime(prime, LIMIT);
	display(prime, LIMIT);
}

/**************************************
 * function : initial_data
 * usage : initial_data(array, n);
 * require : no
 * ____________________________________
 *
 * This function initialize the array
 * with ' '.
 **************************************/

void initial_data(char data[], int n)
{
	int i;

	for ( i = 1 ; i <= n ; i++ )
		data[i] = ' ';
}

/**************************************
 * function : is_prime
 * usage : is_prime(array, n);
 * require :
 * ____________________________________
 *
 * This function marks 'O'
 * if the index is prime number.
 * if not, it marks 'X'
 **************************************/

void is_prime(char data[], int n)
{
	int i, j;

    
	for ( i = 2 ; i <= n ; i++ ) {
		if ( data[i] == ' ' ) {
        	data[i] = 'O';
			for ( j = i ; j <= n ; j++ )
				if ( (data[j] == ' ') && ( j%i == 0) )
					data[j] = 'X';
		}
	}
}

void display(char data[], int n)
{
	int i;

	for ( i = 1 ; i <= n ; i++ ) {
		if ( data[i] == 'O' )
			printf("%d  ", i);
	}
}