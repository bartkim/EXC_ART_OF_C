/*
 * This program displays histogram
 * from the data
 */
#include <stdio.h>

#define STEP 10
#define TRUE 1

void input_data(int histo[], int n);
void display(int histo[], int n);

main()
{
	int i, n, histo[STEP+1] = {0};

    n = STEP;
    input_data(histo, n);
	display(histo, n);
}


void input_data(int histo[], int n)
{
	int data, index;

	while (TRUE) {
		scanf(" %d", &data);
		if ( data < 0 || data > 100 ) {
            printf("%d is out of range!!\n", data);
			break;
        }

        index = data/STEP;
		histo[index] += 1;
    }
}

void display(int histo[], int n)
{
	int i, j;

	for ( i = 0 ; i < n-1 ; i++ ) {
		printf("%2d-%2d | ", STEP*i, STEP*i+STEP-1);
		for ( j = 1 ; j <= histo[i] ; j++ )
			printf("*");
        printf("\n");
	}
	printf("100   | ");
	for ( i = 1 ; i <= histo[n] ; i++ )
		printf("*");
}