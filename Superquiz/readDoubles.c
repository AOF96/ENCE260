/* Question 1 of superquiz 1. C program that uses scanf to read a
 * sequence of double-precision floating point numbers from standard
 * input into a given array until the maximum number is reached or EOF
 * occurs, whichever comes first.
 *
 * Author: Adrian Osuna
 * Date: 07/08/2019     */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int readDoubles(int n, double data[])
{
    //int c = 0;
    double number = 0;
    int count = 0;

    while ((scanf("%lf", &number)) != EOF && count < n ) {
        data[count] = number;
        count++;
    }

    data[count] = 0;
    return count;

    //printf("Read %d values\n", count);

    //int i = 0;
    //while (data[i] != '\0') {
    //printf("%lf\n", data[i]);
    //i++;
    //}
}


int main(void)
{

    double data[5] = {0.0};
    int numRead = 0;

    numRead = readDoubles(4, data);
    printf("Read %d values:\n", numRead);
    for (int i = 0; i < numRead; i++) {
        printf("%0.3lf\n", data[i]);
    }
    return EXIT_SUCCESS;
}
