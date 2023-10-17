#include<stdio.h>

// Lec 163

/*
If n = 3

O/P :
1
12
123
*/
int main()
{
    int i, j;
    int n;

    printf("Enter No. of times : \n");
    scanf("%d", &n);

    for(i = 1 ; i <= n; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
