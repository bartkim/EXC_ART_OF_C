/*
 * This program generates random words.
 */

#include <stdio.h>

#include "random.h"

#define MIN_LETTER 2
#define MAX_LETTER 8
#define OPTION 'l'


main()
{
	int i, j, num;

	for ( i = 0 ; i <= 10 ; i++ ) {
		printf("%d ", rand_int(0, 30));
	}
}