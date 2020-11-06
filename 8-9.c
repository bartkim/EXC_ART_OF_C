/*
 * This program is math Quiz.
 * addition and subtraction.
 */

#include <stdio.h>
#include "random.h"

#define NUM_QUEST 5
#define LOW_LIM	1		/* The number is in larger than 1 and less than 20. */
#define HIGH_LIM 20

void sub_quest(int low, int high);
void add_quest(int low, int high);
void print_right(void);

main()
{
	int i;

	initial_rand();
	printf("Welcome to Math Quiz\n");
	for ( i = 1 ; i <= NUM_QUEST ; i++ ) {
		if ( rand_chance(0.5) ) {
			sub_quest(LOW_LIM, HIGH_LIM);
		} else {
			add_quest(LOW_LIM, HIGH_LIM);
		}
	}
}

void add_quest(int low, int high)
{
	int a, b, answer, i;

	a = rand_int(low, high-low);
	b = rand_int(low, high-a);
		
	printf("What is %d + %d = ? ", a, b);
	scanf(" %d", &answer);

	if ( answer == a+b ) {
		print_right();
	} else {
		i = 1;
		while ( (answer != a+b) && ( i < 3 ) ) {
			printf("That's incorrect. Try a different answer: ");
			scanf(" %d", &answer);
			if ( answer == a+b ) {
				print_right();
				return;
			}
			i++;
		}
		printf("No, the answer is %d\n", a+b);
	}
}

void sub_quest(int low, int high)
{
	int a, b, answer, i;

	a = rand_int(low+low, high);
	b = rand_int(low, a-1);
		
	printf("What is %d - %d = ? ", a, b);
	scanf(" %d", &answer);

	if ( answer == a-b ) {
		print_right();
	} else {
		i = 1;
		while ( (answer != a-b) && ( i < 3 ) ) {
			printf("That's incorrect. Try a different answer: ");
			scanf(" %d", &answer);
			if ( answer == a-b ) {
				print_right();
				return;
			}
			i++;
		}
		printf("No, the answer is %d\n", a-b);
	}
}

void print_right(void)
{
	switch(rand_int(1, 5)) {
		case 1:
			printf("That's the answer.\n");
			break;
		case 2:
			printf("Great!!\n");
			break;
		case 3:
			printf("You are a really genius!!\n");
			break;
		case 4:
			printf("Excellent!!\n");
			break;
		case 5:
			printf("Good job!!\n");
			break;
	}
}