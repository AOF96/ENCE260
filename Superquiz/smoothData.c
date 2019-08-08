/* Question 2 of Superquiz 1. C program that smooths the given n-element
 * array data in place, using the 1:2:1 filter explained in the
 * introduction.
 *
 * Author: Adrian Osuna
 * Date: 08/08/2019  */

#include <stdio.h>
#include <stdlib.h>

void smoothData(int n, double data[])
{
    double first, last, previous, current;
    first = (3 * data[0] + data[1]) / 4;
    last = (data[n - 2] + 3 * data[n - 1]) / 4;

    previous = first;
    for (int i = 1; i <= n - 1; i += 1) {
        current = (data[i - 1] + 2 * data[i] + data[i + 1]) / 4;
        data[i - 1] = previous;
        previous = current;
    }

    data[n - 1] = last;
}

int main(void)
{
    double data[] = {1.0, 2.0, 4.0, 4.0};
    smoothData(4, data);
    printf("Smoothed data: %.3lf", data[0]);
    for (int i = 1; i < 4; i++) {
        printf(", %.3lf", data[i]);
    }
    puts("");
    return EXIT_SUCCESS;
}
