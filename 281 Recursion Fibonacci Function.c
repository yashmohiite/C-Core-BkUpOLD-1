// Solutn Lec = 281

// Reffered Solutn, Lec = 282
#include<stdio.h>
#include<stdlib.h>
// Receives a "n" (Index)
// Returns the Value at Index "n"
/*
F0 - 0
F1 - 1
F2 - F1 + F0 = 1
F3 - F2 + F1 = 2
Fn - Fn-1 + Fn-2
*/

int fibonacci(int n)
{
    if(n==0)
        return 0;
    if (n==1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int num, result;
    printf("Enter Index to get that value of Fibo Series:\n");
    scanf("%d", &num);
    result = fibonacci(num);
    printf("Value at %d in Fibonacci Series is %d\n", num, result);
    return 0;
}
