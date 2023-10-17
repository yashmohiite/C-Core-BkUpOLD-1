#include<stdio.h>
#include<stdlib.h>

int main()

{
    float a, b, c, max, min;

    printf("Enter 1st no. \n");
    scanf("%f", &a);
    printf("Enter 2nd no. \n");
    scanf("%f", &b);
    printf("Enter 3rd no. \n");
    scanf("%f", &c);

    max = a;
    min = b;
    if(a < b)
    {
        max = b;
        min = a;
    }
    if(max < c)
        max = c;
    if(c < min)
        min = c;

    printf("MAXIMUM betn 3 Nos. %f \n", max);
    printf("MINIMUM betn 3 Nos. %f \n\n\n", min);

    return 0;
}
