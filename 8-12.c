/* This program is slot machine. */

#include <stdio.h>
#include <string.h>

#include "random.h"
#include "strlib.h"

#define MONEY 20
#define TRUE 1

int roll_wheel(void);
void print_wheel(int wheel);
int win_lose(int fir, int sec, int thi);

main()
{
	int money, point, wheel1, wheel2, wheel3;
	string yn;

	money = MONEY;
	initial_rand();

	while (money) {
		printf("You have $%d, Would you like to play? (yes / no) ", money);
		yn = getline();
		if ( !strcmp(yn, "yes") ) {
			wheel1 = roll_wheel();
			wheel2 = roll_wheel();
			wheel3 = roll_wheel();
			print_wheel(wheel1);
			print_wheel(wheel2);
			print_wheel(wheel3);
			point = win_lose(wheel1, wheel2, wheel3);
			money += point;
		} else if ( !strcmp(yn, "no") ) {
			break;
		} else {
			printf("Invalid... try again... ");
		}
		printf("\n");
	}
	printf("***********   GAME OVER   *************\n");
}

int roll_wheel(void)
{
	return ( rand_int(1, 6) );
}

void print_wheel(int wheel)
{
	switch(wheel) {
		case 1:
			printf("%-10s", "CHERRY");
			break;
		case 2:
			printf("%-10s", "LEMON");
			break;
		case 3:
			printf("%-10s", "ORANGE");
			break;
		case 4:
			printf("%-10s", "PLUM");
			break;
		case 5:
			printf("%-10s", "BELL");
			break;
		case 6:
			printf("%-10s", "BAR");
			break;
	}
}

int win_lose(int fir, int sec, int thi)
{
	int point;
	
	if (fir==2) {
		point = -1;
	} else if ( fir==6 && sec==6 && thi==6 ) {
		point = 250;
	} else if ( fir==5 && sec==5 && (thi==5 || thi==6) ) {
		point = 20;
	} else if ( fir==4 && sec==4 && (thi==4 || thi==6) ) {
		point = 14;
	} else if ( fir==3 && sec==3 && (thi==3 || thi==6) ) {
		point = 10;
	} else if ( fir==1 && sec==1 && thi==1 ) {
		point = 7;
	} else if ( fir==1 && sec==1 ) {
		point = 5;
	} else if ( fir==1 ) {
		point = 2;
	} else {
		point = -1;
	}

	if ( point > 0 ) {
		printf("You win $%d\n", point);
	} else {
		printf("You lose\n");
	}
	
	return(point);
}