#include <stdio.h>
#include <math.h>

double first_solution_equation(double a, double b, double c);
double second_solution_equation(double a, double b, double c);

main()
{
    double a, b, c, first, second;

	printf("Enter coefficients for the quadratic equation:\n");

	printf("a: ");
	scanf(" %lf", &a);

	printf("b: ");
	scanf(" %lf", &b);

	printf("c: ");
	scanf(" %lf", &c);


	if ( a == 0 ) {
		printf("The solution is %g\n", -c/b);
	}
	else {    	
		first = first_solution_equation(a, b, c);
        second = second_solution_equation(a, b, c);

		if ( first == second ) {
			printf("The soluton is %g\n", first);
		}
        else {
			printf("The first solution is %g\n", first);
			printf("The second solution is %g\n", second);
        }
    }
}

double first_solution_equation(double a, double b, double c)
{
	return( (-b + sqrt(b*b-4*a*c))/(2*a) );
}                      

double second_solution_equation(double a, double b, double c)
{
	return( (-b - sqrt(b*b-4*a*c))/(2*a) );                                  
}