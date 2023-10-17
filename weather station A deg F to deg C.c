#include<stdio.h>
#include<stdlib.h>

int main()
{
    double tempf, tempc;

    printf("Enter temp in deg F:\n");
    scanf("%lf", &tempf);

    tempc = (tempf - 32) / 1.8;

    printf("The temp in deg C: %0.2lf\n\n\n", tempc);

    return 0;
}
