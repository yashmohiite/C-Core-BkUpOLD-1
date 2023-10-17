#include<stdio.h>
#include<stdlib.h>

int main()
{
    double tempc, tempf;

    printf("Enter temperature in deg C:\n");
    scanf("%lf", &tempc);

    tempf = (tempc * 1.8) + 32;

    printf("Temperature in deg F:%0.1lf\n\n\n", tempf);

    return 0;
}
