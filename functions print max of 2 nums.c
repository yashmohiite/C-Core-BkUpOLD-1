// Solutn Lec : 190

// Functions with PARAMETERS and WITHOUT RETURN

#include<stdio.h>

void printMinMax(int num1 , int num2)
{
    if(num1>num2)
    {
        printf("Max = %d \nMin = %d", num1, num2);
    }
    else
    {
        printf("Max = %d \nMin = %d", num2, num1);
    }
}

int main ()

{
    int a, b;
    printf("Enter  2 num to check greater and smaller num\n");
    scanf("%d%d", &a, &b);

    printMinMax(a , b);

    return 0;
}
