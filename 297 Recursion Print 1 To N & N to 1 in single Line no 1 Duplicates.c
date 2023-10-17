// Solutn Lec = 297

// Reffered Solutn, Lec = 297
#include<stdio.h>
#include<stdlib.h>

/*
Ex: I/P 4
4 3 2 1 2 3 4
*/

void finalNTo1AndViceVersa(int n)
{
    if(n == 1)
    {
        printf("%d ", n);
    }
    else //(n>1)
    {
        printf("%d ", n);
        finalNTo1AndViceVersa(n-1);
        printf("%d ", n);
    }
}

int main()
{
    int num;
    printf("Enter a Num: ");
    scanf("%d", &num);
    finalNTo1AndViceVersa(num);

    return 0;
}
