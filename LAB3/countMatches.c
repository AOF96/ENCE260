/* Question 17 of Lab 3. C program that returns a count of the number of
 * times the given searchValue is found in the n-element array data.
 *
 * Author: Adrian Osuna */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int countMatches(int n, int data[], int searchValue)
{
    int count = 0;
    for (int i = 0; i < n; i += 1) {
        if (data[i] == searchValue) {
            count += 1;
        }
    }

    return count;
}

int main(void)
{
    int nums[] = {1, 2, 3, 4, 1, 1, 5};
    printf("%d\n", countMatches(7, nums, 1));
    return EXIT_SUCCESS;
}
