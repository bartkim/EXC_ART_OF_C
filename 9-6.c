#include <stdio.h>
#include <ctype.h>
#include "strlib.h"

#define TRUE 1

void capitalize(string letter);

main()
{
	string letter;
	
	printf("This program capitalize first letter\n and other letters are converted lowercase form.\n");
	while (TRUE) {
		printf("word: ");
		letter = getline();
		if (letter[0] == 0) break;
		capitalize(letter);
		printf("%s\n", letter);
	}
}

void capitalize(string letter)
{
	int i;

	if ( islower(letter[0]) )
		letter[0] = toupper(letter[0]);
	for ( i = 1 ; letter[i] != 0 ; i++ )
		letter[i] = tolower(letter[i]);
}