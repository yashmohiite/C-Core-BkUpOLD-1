#include<stdio.h>

int main ()

{
    int num, count;

    printf("Enter no. of times you want to print Asterisks : \n");
    scanf("%d", &num);

    count = 1;

    while (count <= num)
    {
        printf("*");

        count = count + 1;              //Alternate solution also provided without introducing new counter, refer solutn resource too
    }

    return 0;
}
