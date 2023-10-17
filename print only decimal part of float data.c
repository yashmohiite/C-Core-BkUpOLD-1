#include<stdio.h>
#include<stdlib.h>

int main()

{
    float data, deci, temp1;

    printf("Enter data in float u want to show only decimal part\n");
    scanf("%f", &data);

    //now to just display integer part of the data:
    printf("The integer part : %d\n", (int)data);     // Note Typecasting

    temp1 = data;
    deci = temp1 - (int)data;

    printf("The decimal part is : %f\n\n\n", deci);


    return 0;

    //The provided solution also should be referred, that may be shorter/easier
}
