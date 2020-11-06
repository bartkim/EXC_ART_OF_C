#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "strlib.h"

void encode_string(string dst, string src, int key);

main()
{
	int key;
	string src;
	char dst[100], gar;

	printf("This program encodes a maessage using a cyclic cipher.\n");
	printf("Enter the numeric key: ");
	scanf(" %d", &key);
	scanf("%c", &gar);
	printf("Enter a message: ");
	src=getline();
	encode_string(dst, src, key);
	printf("Encoded message: ");
	printf("%s\n", dst);
}

void encode_string(string dst, string src, int key)
{
	int i, shift;

	for ( i = 0 ; src[i] != 0 ; i++ ) {
		if ( islower(src[i]) ) {
			shift = src[i] + key;
			dst[i] = (shift > 'z') ? shift-'z'+'a'-1 : shift;
			dst[i] = (shift < 'a') ? shift-'a'+'z'+1 : shift;
		} else if ( isupper(src[i]) ) {
			shift = src[i] + key;
			dst[i] = (shift > 'Z') ? shift-'Z'+'A'-1 : shift;
			dst[i] = (shift < 'A') ? shift-'A'+'Z'+1 : shift;
		} else {
			dst[i] = src[i];
		}
	}
	dst[i] = '\0';
}