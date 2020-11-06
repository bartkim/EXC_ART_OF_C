#include <stdio.h>
#include <string.h>
#include "strlib.h"

#define TRUE 1
#define FALSE 0

int is_palindrome(string word);

main()
{
	string word;

	printf("This program tests a word whether the word is palindrome.\n");
	word = getline();
	if ( is_palindrome(word) )
		printf("O.K!! this is a palindrome.\n");
	else
		printf("NOT!!\n");
}

int is_palindrome(string word)
{
	int i, mid, len;

	len = strlen(word);
	mid = len / 2;
	for ( i = 0 ; i <= mid ; i++ ) {
		if ( word[i] == word[len-i-1] )
			;
		else
			return(FALSE);
	}
	return(TRUE);
}