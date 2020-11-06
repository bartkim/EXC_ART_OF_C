/*
 * This program tesets the leftfrom function.
 */


#include <stdio.h>

typedef enum {North, East, South, West} dir;

dir leftfrom(dir direct);

main()
{
	dir direct;

	direct = North;
	printf("This program tests the leftfrom function.\n");
	printf("%s", direct);
}
	
