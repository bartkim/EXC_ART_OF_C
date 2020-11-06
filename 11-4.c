/*
 * This program evaluates the standard deviation
 */

#include <stdio.h>
#include <math.h>

/**********************
 * the number of data *
 **********************/

#define NUM_DATA 10

/************************
 * function declaration *
 ************************/

void input_data(double data[], int n);
double average(double data[], int n);
double standard_deviation(double data[], int n);

main()
{
	double data[NUM_DATA+1], result;

    input_data(data, NUM_DATA);
	result = standard_deviation(data, NUM_DATA);
	printf("The standard deviation is %g", result);
}

/****************************************
 * function : input_data
 * usage : input_data(data, n);
 * require : no
 * ______________________________________
 *
 * This function inputs data from user
 * and records to array.
 ****************************************/

void input_data(double data[], int n)
{
	int i;

	for ( i = 1 ; i <= n ; i++ ) {
		printf("data %d : ", i);
		scanf(" %lf", &data[i]);
	}
}

/*****************************************
 * function : average
 * usage : average = average(data, n);
 * require : no
 * _______________________________________
 *
 * This function evaluates the average
 * from the data array.
 *****************************************/

double average(double data[], int n)
{
	int i;
	double total, average;

    total = 0;
	for ( i = 1 ; i <= n ; i++ )
		total += data[i];

	average = total / n;

	return(average);
}

/*****************************************
 * function : standard_deviation
 * usage : result = standard_deviation
 * require : average
 * _______________________________________
 *
 * This function evaluates the standard deviation.
 *****************************************/

double standard_deviation(double data[], int n)
{
	int i;
	double ave, run_sum, result;

    ave = average(data, n);
    run_sum = 0;
	for ( i = 1 ; i <= n ; i++ )
		run_sum += (data[i]-ave) * (data[i]-ave);

	return ( sqrt( run_sum/n ) );
}
		   	
	    	
