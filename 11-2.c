/*
 * This program reads the score from panel of seven judges
 * and then computs the average of the five scores
 * that remain after discarding the hightst and lowest.
 */

#include <stdio.h>

/************************
 * the number of judges *
 ************************/

#define NUM_JUDGE 7

/*************************
 * function declarartion *
 *************************/

void input_score(double score[], int n);
double average_score(double score[], int n);
double min_score(double score[], int n);
double max_score(double score[], int n);

main()
{
    double score[NUM_JUDGE+1], average;

	input_score(score, NUM_JUDGE);
	average = average_score(score, NUM_JUDGE);

	printf("The average score is %g\n", average);
}

/**********************************
 * function : input_score
 * usage : input_score(score, num_of_elements);
 * require : no
 * ________________________________
 *
 * This function takes a 1-D array and its number of elements.
 * And records the score to the array from user.
 ***********************************/

void input_score (double score[], int n)
{
	int i;

	for ( i = 1 ; i <= n ; i++ ) {
    	printf(" %d judge score : ", i);
		scanf(" %lf", &score[i]);
    }
}  	
 
/****************************************************
 * function : average_score
 * usage : average_score(score, num_of_element);
 * require : min_score, max_score
 * ________________________________
 *
 * This function evaluates the average of the score
 * discarding the highest and lowest value.
 ****************************************************/

double average_score(double score[], int n)
{
	int i;
    double total, average, min, max;

	total = 0;

	for ( i = 1 ; i <= n ; i++ )
		total += score[i];

	min = min_score(score, n);
    max = max_score(score, n);
	average = (total-min-max) / (n-2);

	return(average);
}

/*****************************************************
 * function : min_score
 * usage : min = min_score(score, num_of_element);
 * require : no
 * __________________________________________________
 *
 * This function returns minimum value of
 * the array elements. !!! from array[1] !!!
 *****************************************************/

double min_score(double score[], int n)
{
	int i;
	double min;

	min = score[1];

	for ( i = 2 ; i <= n ; i++ )
		if ( min < score[i] )
			min = score[i];

	return(min);
}

/*****************************************************
 * function : max_score
 * usage : min = max_score(score, num_of_element);
 * require : no
 * __________________________________________________
 *
 * This function returns maximum value of
 * the array elements. !!! from array[1] !!!
 *****************************************************/

double max_score(double score[], int n)
{
	int i;
	double max;

	max = score[1];

	for ( i = 2 ; i <= n ; i++ )
		if ( max > score[i] )
			max = score[i];

	return(max);
}