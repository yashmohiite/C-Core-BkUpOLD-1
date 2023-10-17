#include<stdio.h>
#include<stdlib.h>

int main()

{
    int num, u, t, h;

    printf("Enter 3 digit int val: \n");
    scanf("%d", &num);

    u = num % 10;
    t = (num / 10) % 10;
    h = (num / 100) % 10;

    if (u > t)
    {
        if (t > h)
            printf("Ascending Int val \n");
    }
    else
        printf("Not Ascending int val \n");

    return 0;
}
