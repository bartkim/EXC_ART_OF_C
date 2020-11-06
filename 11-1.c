#include <stdio.h>

main()
{
	printf("Values of type char require %d bytes.\n", sizeof(char));
	printf("Values of type int require %d bytes.\n", sizeof(int));
	printf("Values of type short require %d bytes.\n", sizeof(short));
	printf("Values of type long require %d bytes.\n", sizeof(long));
	printf("Values of type float require %d bytes.\n", sizeof(float));
    printf("valuse of type double require %d bytes.\n", sizeof(double));
}