#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "strlib.h"

#define TRUE 1

string max_word(string line);

main()
{
	string line, word;

	printf("Enter the line:\n");
	line = getline();
	word = max_word(line);
	printf("\nThe longest word is \"%s\".\n", word);
}

string max_word(string line)
{
	string word;
	int len, i;

	len = 0;
	word = (string) malloc(1);
	while (TRUE) {
		for ( i = 0 ; line[i] != ' ' && line[i] != 0 ; i++ )
			;
		if ( i >= len ) {
			len = i;
			free(word);
			word = (string) malloc(i+2);
			strncpy(word, line, i+1);
			word[i+1] = 0;
		}
		line = strchr(line, ' ');
		if ( !line ) break;
		line++;
	}
	return(word);
}