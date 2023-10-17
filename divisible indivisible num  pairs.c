#include<stdio.h>
#include<stdlib.h>

/*
Pairs : (a,b) , (b,c) , (a,c)
Examples:
Divisible : 5, 10, 20
Divisible : 3, 36, 72
Non Divisible : 2, 4, 7
Non Divisible : 5, 7, 9
*/

int main()

{
    int a, b, c;

    printf("Enter 3 int : \n");
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0 || b == 0 || c == 0)
        printf("Cannot divide by 0, Check your Input again \n");
    else if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0))
        printf("Integers and pairs Divisible \n");
    else
        printf("Integers and pairs not divisible \n");

    return 0;
}
