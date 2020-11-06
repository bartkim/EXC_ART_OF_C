#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strlib.h"

string pluralform(string word);

main()
{
	string word;

	while(1) {
		word = getline();
		if (word[0] == 0) break;
		printf("%s  ->   %s\n", word, pluralform(word));
	}
}

string pluralform(string word)
{
	string plural;
	int len;

	len = strlen(word);
	
	if ( !strcmp("ch", word+len-2) || !strcmp("sh", word+len-2 ) ||
		 *(word+len-1) == 's' || *(word+len-1) == 'x' || *(word+len-1) == 'z' ) {
		plural = (string) malloc(len+3);
		strcpy(plural, word);
		strcat(plural, "es");
	} else if ( *(word+len-1) == 'y' && *(word+len-2) != 'a' && *(word+len-2) != 'e'
		&& *(word+len-2) != 'i' && *(word+len-2) != 'o' && *(word+len-2) != 'u' ) {
		plural = (string) malloc(len+3);
		strcpy(plural, word);
		*(plural+len-1) = 'i';
		strcat(plural, "es");
	} else {
		plural = (string) malloc(len+2);
		strcpy(plural, word);
		strcat(plural, "s");
	}
	return(plural);
}