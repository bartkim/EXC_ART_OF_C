#include <stdio.h>

main()
{
	int i;

	for ( i=1 ; i<=100 ; i++ ) {
		if ( (i%6 == 0) && (i%7 == 0) )
			printf(" %d \t", i);
	}
}