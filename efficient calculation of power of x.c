#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

//program should take x and print x^2, x^4, x^6, x^8 in an efficient manner

int main()

{
    int x, p2, p4, p6, p8;

    printf("Enter the value of x:\n");
    scanf("%d", &x);

    p2 = x * x;

    p4 = p2 * p2;

    p6 = p4 * p2;

    p8 = p4 * p4;

    printf("x^2 = %d, x^4 = %d, x^6 = %d, x^8 = %d \n\n\n", p2, p4, p6, p8);

    return 0;
}
