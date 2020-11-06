/*
 * This program expresses the number as a product of prime numbers.
 */

#include<stdio.h>
#include<math.h>

void prime_factorize(int n);
int is_prime(int n);

main()
{
	int n;

    printf("Enter number to be factorized: ");
	scanf(" %d", &n);

	prime_factorize(n);
}



/******************************************************************
 *                                                                *
 * This function prints the number as a product of prime numbers. *
 *                                                                *
 *	needed function                                               *
 *	 - is_prime                                                   *
 *                                                                *
 ******************************************************************/

void prime_factorize(int n)
{
	int i, prime;

	if (n < 0) {
		printf("%d is not invalid number!", n);
		return;
	}
	if (n == 0) {
		printf("0");
		return;
    }

	printf("1");

	while ( n%2 == 0 ) {
		printf("*2");
        n /= 2;
	}

    prime = 3;
    while ( prime <= n ) {
		for ( i = prime ; i <= n ; i+=2 ) {
			if (is_prime(i)) break;
		}
		while ( n%i == 0 ) {
			printf("*%d", i);
			n /= i;
	    }        	
		prime += 2;
	}    	
	printf("\n");
}


/*************************************************************
 *                                                           *
 * This function tests whether the number is prime number.   *
 * It returns 1, if the integer argument is prime            *
 *                                                           *
 *************************************************************/

int is_prime(int n)
{
	int i, limit;

	if (n <= 1) return(0);
	if (n == 2) return(1);
	if (n%2 == 0) return(0);

	limit = sqrt(n) + 1;
	for ( i = 3 ; i <= limit ; i++ ) {
		if (n%i == 0) return(0);
	}
	return(1);
}