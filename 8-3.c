/* This program display phone number that
 * is randomly producted.
 */

#include <stdio.h>
#include <stdlib.h>

#include "random.h"

main()
{
	int i;

	srand((unsigned)time(NULL));
	printf("%d%d%d-", rand_int(2, 9),
		             rand_int(2, 9),
					 rand_int(1, 9));
	
	for ( i = 1 ; i <= 4 ; i++ ) {
		printf("%d", rand_int(1, 9));
	}
	printf("\n");
}