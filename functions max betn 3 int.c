// Solutn Lec : 191

// Very IMP Lec

// This will have NO PARAMETERS but WILL HAVE RETURN Value

#include<stdio.h>

int maxBetween3()      // It's OK sometimes to keep Paranthesis empty, or not mentioning parameters before
{
    int num1, num2, num3;
    printf("Enter num1, num2, num3 : \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2)
        if(num1 > num3)
            return num1;
        else
            return num3;
    else if(num2 > num3)
        return num2;
    else return num3;
}

int main ()

{
    int max;

    max = maxBetween3();   // Note here, this will store the return value of the functn, we may use it later

    printf("Maximum = %d \n", max);

    return 0;
}
