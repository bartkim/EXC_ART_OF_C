/*
 * This program tests whether the letter is consonant.
 */

#include <stdio.h>

int consonant (char ch);

main()
{
	int i;
	
	printf("The English consonats are:\n");

	for (i = 'A' ; i <= 'Z' ; i++) {
		if ( consonant(i) )
			printf("%c  ", i);
	}
	printf("\n");

	for (i = 'a' ; i <= 'z' ; i++) {
		if ( consonant(i) )
			printf("%c  ", i);
	}
	printf("\n");
}

/*
 * function : consonant
 * usage : if (consonant(ch)) {...
 * need : no
 * ______________________________________
 *
 * This function tests whether the letter is consonant.
 */

int consonant (char ch)
{
	return ( (ch !='A') && (ch !='E') && (ch !='I') && (ch !='O') && (ch !='U')
		  && (ch !='a') && (ch !='e') && (ch !='i') && (ch !='o') && (ch !='u') );
}	
