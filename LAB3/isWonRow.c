/* Question 18 of Lab 3. Returns 1 or 0 according to whether the row is
 * won by that player or not.
 *
 * Author: Adrian Osuna */

#include <stdio.h>
#include <stdlib.h>

int isWonRow(char player, char game[3][3], int rowNum)
{
    int result = 1;
    for (int i = 0; i < 3; i++) {
        if (game[rowNum][i] != player) {
            result = 0;
            break;
        }
    }

    return result;
}

int main(void)
{
    char game[3][3] = {{'X', 'O', ' '},{'X', 'X', 'X'}, {' ', ' ', ' '}};
    printf("%d\n", isWonRow('X', game, 1));
    //char game[3][3] = {{'X', 'O', ' '},{' ', ' ', ' '}, {'X', 'X', 'O'}};
    //printf("%d\n", isWonRow('X', game, 2));
    return EXIT_SUCCESS;

}
