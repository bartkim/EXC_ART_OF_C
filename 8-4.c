/* this program displays the card randomly */

#include <stdio.h>
#include "random.h"

void print_card(void);

main()
{
	int i;

	initial_rand();

	for ( i = 1 ; i <= 10 ; i++ )
		print_card();
}

void print_card(void)
{
	int rank, suit;

	rank = rand_int(1, 13);
	suit = rand_int(1, 4);
	switch(rank) {
		case 1:
			printf("Ace of ");
			break;
		case 11:
			printf("Jack of ");
			break;
		case 12:
			printf("Queen of ");
			break;
		case 13:
			printf("King of ");
			break;
		default:
			printf("%d of ", rank);
	}
	switch(suit) {
		case 1:
			printf("Clubs\n");
			break;
		case 2:
			printf("Diamonds\n");
			break;
		case 3:
			printf("Hearts\n");
			break;
		case 4:
			printf("Spades\n");
			break;
	}
}