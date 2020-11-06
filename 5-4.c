#include <stdio.h>

void fib (int n);

main()
{
	int n;

	printf("This program lists the Fibonacci sequence until n.\n");
	printf("Until what number? ");
	scanf(" %d", &n);

	fib(n);
}

void fib (int n)
{
	int i, temp1, temp2, temp3;

	temp1 = 0;
	temp2 = 1;

	for (i=0 ; i<=n ; i++) {
		printf("F(%d) = %5d\n", i, temp1);
        temp3 = temp1+temp2;
		temp2 = temp1;
        temp1 = temp3;
	}
}
    	
