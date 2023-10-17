// Solutn Lec = 303

// Reffered Solutn, Lec = 303
#include<stdio.h>
#include<stdlib.h>

/*
In FInal O/P:
 1 Means Even Sum
 0 Means Odd Sum
*/

int digitsSumEven(int n)
{
    if(n<10)
        return n % 2 ? 0 : 1;
    return n % 10 % 2 ? !digitsSumEven(n/10) : digitsSumEven(n/10); //Condition for Right Most Digit
}

int main()
{
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    printf("%d\n", digitsSumEven(num));
    return 0;
}
