#include <stdlib.h>
#include <stdio.h>

int main()
{
    // char vowels[] =     {'M', 'O', 'J', 'T', 'A', 'B', 'A'};
    // char *pvowels = vowels;
    // int i;

    // for(i = 0; i < 7; i++) {
    //     printf("&vowels [%d]: %p, pvowels + %d : %p, vowels + %d : %p \n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    // }

    // for (i = 0; i < 7; i++) {
    //     printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    // }

    // int n = 7;
    // int i;
    // char *pname = (char *) malloc(sizeof(char));

    // pname[0] = 'M';
    // pname[1] = 'O';
    // *(pname + 2) = 'J';
    // pname[3] = 'T';
    // *(pname + 4) = 'A';
    // pname[5] = 'B';
    // *(pname + 6) = 'A';

    // for (i = 0; i < n; i++) {
    //     printf("%c" , name[i]);
    // }

    // printf("\n");

    // free(pname);


    int nrows = 2;
    int ncols = 5;
    int i, j;

    char **pvowels = (char **) malloc(nrows * sizeof(char *));

    pvowels[0] = (char *) malloc(ncols * (sizeof(char)));
    pvowels[1] = (char *) malloc(ncols * (sizeof(char)));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (i = 0; i < nrows; i++) {
        for (j = 0; j < ncols; j++) {
            printf("%c" , pvowels[i][j]);
        }

        printf("\n");
    }

    free(pvowels[0]);
    free(pvowels[1]);

    free(pvowels);
}