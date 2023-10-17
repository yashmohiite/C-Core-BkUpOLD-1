#include<stdio.h>

int main ()
{
    int i, j = 0, num;

    printf("Enter num to display that many even num from 2 : \n");
    scanf("%d", &num);

    for (i = 0 ; i < num ; i++)
    {
        j = j + 2;
        printf("%d \n", j);
    }

    return 0;
}


// Solution & Alternative Options in Lec : 175
