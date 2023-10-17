// Solutn Lec = 231

// Reffered Solutn, Lec = 231
#include<stdio.h>
#include<stdlib.h>
# define SIZE 11

int main()
{
    int i,j;
    int mat[SIZE][SIZE];

    //STep 1 - Fill the Values in the Table
    for(i=1 ; i<SIZE ; i++)
    {
        for(j=1 ; j<SIZE ; j++)
        {
            mat[i][j] = i * j;
        }
    }

    //Step 2 - Printing the Multiplication Table
    for(i=1 ; i<SIZE ; i++)
    {
        for(j=1 ; j<SIZE ; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
