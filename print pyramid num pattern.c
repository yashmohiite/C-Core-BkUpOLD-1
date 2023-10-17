// Solution in Lec : 177

#include<stdio.h>

int main ()
{
    int i, j, k;
    int blankSpaces;
    int n;
    int currentValue = 1;

    printf("Enter no. of rows in pyramid : \n");
    scanf("%d", &n);

    blankSpaces = n - 1;

    for (i = 1 ; i <= n ; i++)
    {
        for (k = blankSpaces ; k >= 1 ; k--)
        {
            printf(" ");
        }

        for (j = 1 ; j <= i ; j++)
        {
            printf("%d", currentValue);
            currentValue += 1;
        }

        printf("\n");
        blankSpaces--;
    }

    return 0;
}


//Slight dis - allignment in this code, but solution video is executing correctly
