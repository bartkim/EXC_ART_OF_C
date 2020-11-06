#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "strlib.h"

#define TRUE 1
#define FALSE 0

int count_word(string str);
int is_only_alnum(string word);

main()
{
	int count;
	string str;

	count = 0;
	while (TRUE) {
		str = getline();
		if ( str[0] == 0 ) break;
		count += count_word(str);
	}
	printf("Number of words: %d\n", count);
}

int count_word(string str)
{
	int count;
	
	count = 0;

	while (TRUE) {
		if ( is_only_alnum(str) )
			count++;
		str = strchr(str, ' ');
		if ( !str ) break;
		str++;
	}
	return(count);
}

/********************************************
 * function : is_only_alnum
 * usage : if ( is_only_alnum (word) ) ...
 * ------------------------------------------
 * This function takes the point 
 * and tests the word that contains a alphabet or number.
 ********************************************/

int is_only_alnum(string word)
{
	int i;

	for ( i = 0 ; word[i] != ' ' && word[i] != 0 ; i++ )
		if ( isalnum(word[i]) )
			return(TRUE);

	return(FALSE);
}