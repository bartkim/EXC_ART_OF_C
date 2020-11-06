#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "strlib.h"

string oldstyle(string word);
int is_vowel(char ch);

main()
{
	string word;

	while (1) {
		word = getline();
		if ( word[0] == 0 ) break;
		printf("%s\n", oldstyle(word));
	}
}

string oldstyle(string word)
{
	int i, len;
	string old;

	len = strlen(word);
	if (is_vowel(word[0])) {
		old = (string) malloc(2);
		null_str(old, 2);
		strncat(old, word, 1);
		strcat(old, word+len-1);
		strcat(old, ".");
	} else {
		i = 0;
		while (!is_vowel(word[i]))
			i++;
		old = (string) malloc(i+1);
		null_str(old, i+1);
		strncat(old, word, i);
		strcat(old, word+len-1);
		strcat(old, ".");
	}
	return(old);
}


int is_vowel(char ch)
{
	ch = tolower(ch);
	
	return ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' );
}