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
    int c = 0;
    double number = 0;
    int count = 0;

    while ((scanf("%lf", &number)) != EOF && count < n && (c = getchar()) != EOF) {
        data[count] = number;
        count++;
        if (count == n) {
            return count;
        }

    }

    return count;
}


int main(void)
{
    //Test1.txt code:

    //~ double data[5] = {0.0};
    //~ int numRead = 0;

    //~ numRead = readDoubles(4, data);
    //~ printf("Read %d values:\n", numRead);
    //~ for (int i = 0; i < numRead; i++) {
    //~ printf("%0.3lf\n", data[i]);
    //~ }

    //Test2.txt code:

    //~ double data[6] = {0.0};
    //~ int numRead = 0;

    //~ numRead = readDoubles(6, data);
    //~ printf("Read %d values:\n", numRead);
    //~ for (int i = 0; i < numRead; i++) {
    //~ printf("%0.3lf\n", data[i]);
    //~ }


    //Test3.txt code:

    //~ double data[1] = {0.0};
    //~ int numRead = 0;

    //~ numRead = readDoubles(1, data);
    //~ printf("Read %d values:\n", numRead);
    //~ for (int i = 0; i < numRead; i++) {
    //~ printf("%0.3lf\n", data[i]);
    //~ }



    return EXIT_SUCCESS;
}
