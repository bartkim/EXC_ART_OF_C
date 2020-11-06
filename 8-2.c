#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOW 2
#define HIGH 100

void rand_initial(void);
int rand_int(int low, int high);

main()
{
	int i;

	rand_initial();
	for ( i = 1 ; i <= 10 ; i++ ) {
		printf("%d\n", rand_int(LOW, HIGH));
	}
}

void rand_initial(void)
{
	srand ((unsigned)time(NULL));
}

int rand_int(int low, int high)
{
	int k;
	double d;

	d = (double)rand() / ((double)RAND_MAX + 1);
	k = d*(high-low);

	return(low+k);
}
