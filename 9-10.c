#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "strlib.h"

#define MAX_STRING 5
#define TRUE 1
#define FALSE 0

int is_palindrome(string sen);
string only_alnum(string sen);

main()
{
	string sen, alnum;

	printf("This program checks for palindromes.\n");
	printf("Indicate the end of the input with a blank line.\n");
	while (TRUE) {
		printf("Enter a string: ");
		sen = getline();
		if ( sen[0] == 0 ) break;
		alnum = only_alnum(sen);
		lower_string(alnum, alnum);
		if ( is_palindrome(alnum) )
			printf("That is a palindrome.\n");
		else
			printf("That is not palindrome.\n");
	}
}

string only_alnum(string sen)
{
	int i, len, del, size;
	string alnum, alnum2;

	len = strlen(sen);
	del = 0;
	size = MAX_STRING;
	alnum = (string) malloc(size+1);

	for ( i = 0 ; sen[i] != 0 ; i++ ) {
		if ( i == size ) {
			size += MAX_STRING;
			alnum2 = (string) malloc(size+1);
			strncpy(alnum2, alnum, i);
			free(alnum);
			alnum = alnum2;
		}
		if ( isalnum(sen[i]) )
			alnum[i-del] = sen[i];
		else
			del++;
	}
	alnum[i-del] = 0;
	if ( i==0 ) {
		free(alnum);
		return(NULL);
	}

	alnum2 = (string) malloc(i+1);
	strcpy(alnum2, alnum);
	free(alnum);
	return(alnum2);
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