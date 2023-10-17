// Solutn Lec = 301

// Reffered Solutn, Lec = 301
#include<stdio.h>
#include<stdlib.h>

/*
n = index
Pn = 0, n = 0
Pn = 1, n = 1
Pn = 2*Pn-1 + Pn-2, n > 1
Ex:
0, 1, 2, 5, ... So, P3 = 2 * P2 + P1 = 4 + 1 = 5
*/

int pellNumberRecursive(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return 2 * pellNumberRecursive(n-1) + pellNumberRecursive(n-2);
}

int pellNumberNonRecursive(int n)
{
    int i;
    int prePrevious = 0, previous = 1;
    int current;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    for(i = 2 ; i <= n ; i++)
    {
        current = 2 * previous + prePrevious;
        prePrevious = previous; //Pn-2 = Pn-1
        previous = current;
    }
    return current;
}

int main()
{
    int num;
    printf("Enter Index of which you want Pell Num in Pell Seq: ");
    scanf("%d", &num);
    printf("\nPell Num at Index %d is %d\n", num, pellNumberNonRecursive(num));
    return 0;
}
