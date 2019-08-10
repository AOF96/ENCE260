/* Question 3 of super quiz 1. C program that calls the functions
 * readDoubles and smoothData and then prints the times where the
 * critical threshold was excedeed.
 *
 * Author: Adrian Osuna
 * Date: 09/08/2019
 * */
#include <stdio.h>
#include <stdlib.h>
#define CRITICAL_HIGH 9.81
#define CRITICAL_LOW 5.0

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
    double data[100000] = {0.0};
    int n = 100000;
    int upper_threshold = 0;
    int lower_threshold = 0;
    double recorded_time = 0.0;
    double max1, max2;

    int all_data = readDoubles(n, data);
    smoothData(all_data, data);

    max1 = data[0];
    max2 = recorded_time;
    for (int i = 0; i < all_data; i++) {

        if (data[i] > max1) {
            max1 = data[i];
            max2 = recorded_time;
        }

        if (data[i] > CRITICAL_HIGH) {

            if (upper_threshold == 0) {
                printf("Acceleration of 9.81 m/sec^2 exceeded at t = %.2lf secs.\n", recorded_time);
                upper_threshold = 1;
                lower_threshold = 0;
            }

            if (lower_threshold == 1) {
                printf("Acceleration of 9.81 m/sec^2 exceeded at t = %.2lf secs.\n", recorded_time);
                lower_threshold = 0;
            }
        }

        if (data[i] < CRITICAL_LOW) {
            lower_threshold = 1;
        }

        recorded_time += 0.01;
    }
    printf("\n");
    printf("Maximum acceleration: %.2lf m/sec^2 at t = %.2lf secs.\n", max1, max2);

    return EXIT_SUCCESS;
}
