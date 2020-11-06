#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strlib.h"

#define TRUE 1
#define MAX_DIGIT 20
#define MAXLINE 120

string date_string(int day, int mon, int year);
string int_to_string(int intger);
string rev_string(string str);
string mon_string(int mon);

main()
{
	int day, month, year;
	
	day = 5;
	month = 3;
	year = 1976;

	printf("%s\n", date_string(day, month, year));
}


string date_string(int day, int mon, int year)
{
	int i, len;
	string date, date2;

	date = (string) malloc(MAXLINE+1);
	for ( i = 0 ; i <= MAXLINE ; i++ )
		date[i] = 0;

	strcat(date, int_to_string(day));
	strcat(date, "-");
	strcat(date, mon_string(mon));
	strcat(date, "-");
	strcat(date, int_to_string(year%100));

	len = strlen(date);
	date2 = (string) malloc(len+1);
	strcpy(date2, date);
	free(date);
	
	return(date2);
}

string mon_string(int mon)
{
	switch (mon) {
		case 1:
			return("Jan");
			break;
		case 2:
			return("Feb");
			break;
		case 3:
			return("Mar");
			break;
		case 4:
			return("Apr");
			break;
		case 5:
			return("May");
			break;
		case 6:
			return("Jun");
			break;
		case 7:
			return("Jul");
			break;
		case 8:
			return("Aug");
			break;
		case 9:
			return("Sep");
			break;
		case 10:
			return("Oct");
			break;
		case 11:
			return("Nov");
			break;
		case 12:
			return("Dec");
			break;
	}
}
		


string int_to_string(int integer)
{
	int i, temp, size;
	char digit;
	string str, str2;

	size = MAX_DIGIT;
	str = (string) malloc(size+1);

	i = 0;
	while (integer != 0) {
		if ( size == i ) {
			size += MAX_DIGIT;
			str2 = (string) malloc(size+1);
			strncpy(str2, str, i);
			free(str);
			str = str2;
		}
		temp = integer % 10;
		digit = '0'+temp;
		integer /= 10;
		str[i] = digit;
		i++;
	}
	str[i] = 0;
	str = rev_string(str);
	return(str);
}

string rev_string(string str)
{
	int i, len;
	string rev;

	len = strlen(str);
	rev = (string) malloc(len+1);

	for ( i = 0 ; str[i] != 0 ; i++ )
		rev[i] = str[len-i-1];
	
	rev[i] = 0;
	return(rev);
}