#include <stdio.h>
#include "strlib.h"

#define TRUE 1

int score(string word);
int score_table(char ch);

main()
{
	string word;
	int point;

	printf("This program tests the ScrambleScore function.\n");
	printf("Enter words, ending with a blank line.\n");
	
	while (TRUE) {
		printf("word: ");
		word = getline();
		if (word[0] == 0) break;
		point = score(word);
		printf("The basic score for '%s' is %d.\n", word, point);
	}
}

int score(string word)
{
	int i, point;

	point = 0;
	for ( i = 0 ; word[i] != 0 ; i++ ) {
		point += score_table(word[i]);
	}
	return(point);
}

int score_table(char ch)
{
	if ( ch=='Q' || ch=='Z' ) {
		return(10);
	} else if ( ch=='J' || ch=='X' ) {
		return(8);
	} else if ( ch=='K') {
		return(5);
	} else if ( ch=='F' || ch=='H' || ch=='V' || ch=='W' || ch=='Y' ) {
		return(4);
	} else if ( ch=='B' || ch=='C' || ch=='M' || ch=='P' ) {
		return(3);
	} else if ( ch=='D' || ch=='G' ) {
		return(2);
	} else if ( ch=='A' || ch=='E' || ch=='I' || ch=='L' || ch=='N' ||
				ch=='O' || ch=='R' || ch=='S' || ch=='T' || ch=='U' ) {
		return(1);
	} else {
		return(0);
	}
}