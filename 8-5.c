#include <stdio.h>
#include "random.h"

main()
{
	int head, tail, con, total;

	head = tail = con = total = 0;
	initial_rand();

	while ( (con != 3) && (con != -3) ) {
		if ( rand_chance(0.5) ) {
			printf("heads\n");
			con = (con >= 0) ? con+1 : 1;
		} else {
			printf("tails\n");
			con = (con <= 0) ? con-1 : -1;
		}
		total++;
	}
	printf("It took %d flips to get %s 3 consecutive times\n",
		                   total, (con > 0) ? "heads":"tails");
}