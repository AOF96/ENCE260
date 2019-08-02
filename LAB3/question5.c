/* Program that loops, reading characters from standard input and
 * identifying thier type to standard output one per line, until
 * EOF occurs.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int c = 0;
    while ((c = getchar()) != EOF) {
        if (c == 10) {
            puts("'\\n'");
        } else if (isdigit(c) > 0) {
            printf("'%c': Digit %c\n", c, c);
        } else if (isalpha(c) != 0) {
            if (isupper(c)) {
                printf("'%c': Letter %d\n", c, c - 64);
            } else {
                printf("'%c': Letter %d\n", c, c - 96);
            }

        } else {
            printf("'%c': Non-alphanumeric\n", c);
        }

    }

    return EXIT_SUCCESS;

}

