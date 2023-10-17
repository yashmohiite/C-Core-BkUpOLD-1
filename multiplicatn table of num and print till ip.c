#include<stdio.h>

int main ()

{
    int num, i, num2, j;

    printf("Enter a Num for its table : \n");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", num, i, num * i);
    }

    printf ("Enter int upto which you want the previous num's table : \n");
    scanf ("%d", &num2);

    for (j = 1 ; j <= num2 ; j++)
    {
        printf("%d X %d = %d \n", num , j , num * j);
    }

    return 0;
}


// Solution : Lec : 173
