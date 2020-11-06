#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "strlib.h"

#define TRUE 1

string reverse_sentence(string line);

main()
{
	string line;

	printf("Enter a line: ");
	line = getline();
	printf("%s\n", reverse_sentence(line));
}

string reverse_sentence(string line)
{
	int i;
	string reverse, space;

	while(TRUE) {
		space = strchr(line, ' ');
		if (!space) break;