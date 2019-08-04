/* Question 12 of lab3. C function with signature double that returns the
 * discriminant of the quadratic with coefficients a, b and c.
 *
 * Author: Adrian Osuna */

#include <stdio.h>
#include <stdlib.h>

double discriminant(double a, double b, double c);


int main(void)
{
    printf("%.2lf\n", discriminant(1.5, 1.5, 1.5));
    return EXIT_SUCCESS;
}


double discriminant(double a, double b, double c)
{
    return (b * b - 4 * a * c);
}
