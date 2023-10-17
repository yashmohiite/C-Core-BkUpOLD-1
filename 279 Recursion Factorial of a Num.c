// Solutn Lec = 279

// Reffered Solutn, Lec = 280
#include<stdio.h>
#include<stdlib.h>

//Factorial(num) = num * (num-1) *...*2*1 = num!

int factorial(int num)
{
    if(num == 1)
        return 1;
    return num * factorial(num-1);
}

/*
factorial(3)-->return 3 * factorial(2)
factorial(2)-->return 2 * factorial(1)
factorial(1)-->return 1
*/

int main()
{
    int num = 5;
    int result;
    result = factorial(num);
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
