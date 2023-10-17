// Solutn Lec = 298

// Reffered Solutn, Lec = 298
#include<stdio.h>
#include<stdlib.h>

/*
Sequence:
n here is Index
Ln = 2, If n = 0
Ln = 1, If n = 1
Ln = Ln-1 + Ln-2, If n > 1
Ex: 2, 1, 3, 4, 7
*/

int lucasRecursive(int n)
{
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;
    return lucasRecursive(n-1) + lucasRecursive(n-2);
}

int lucasNotRecursive(int n)
{
    int i;
    int previous = 2;
    int current = 1;
    int temp;
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;
    for(i = 2 ; i <= n ; i++)
    {
        temp = previous + current;
        previous = current;
        current = temp;
    }
    return current;
}

int main()
{
    int num;
    printf("Enter index of Lucas Seq to obtain: ");
    scanf("%d", &num);
    printf("Index %d has Value %d",num, lucasRecursive(num));
    return 0;
}
