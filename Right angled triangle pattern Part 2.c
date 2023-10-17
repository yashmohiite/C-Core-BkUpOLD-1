// Lec 165
/*
If n = 3

O/P :
1
22
333
*/

//1st Method :

#include<stdio.h>
int main ()

{
    int n;
    int i, j;

    printf("Enter n no. of times: \n");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        for (j = 1 ; j <= i ; j++)
        {
            printf("%d", i);
        }

        printf("\n");

    }

    return 0;
}

/*
2nd Method :

#include<stdio.h>

int main ()

{
    int n;
    int i, j;

    printf("Enter n: \n");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        j = i;
        while (j>0)
        {
            printf("%d", i);
            j--;
        }
        printf("\n");
    }

    return 0;
}

*/
