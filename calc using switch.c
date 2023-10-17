#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//take care to write condition or a message for divide by 0

int main()

{
    int num1, num2;
    char op;

    printf("Enter the Operand: \n");
    scanf("%c", &op);

    printf("Enter 2 Nos. \n");
    scanf("%d%d", &num1, &num2);

    switch (op)                                  //write variable you wanna check in switch paranthesis, then remember to create a block for switch
    {
        case '+':
            printf("%d + %d = %d \n\n\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d \n\n\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d \n\n\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0)
                printf("Error, Cannot divide by 0, Try Again \n\n\n");
            else
                printf("%d / %d = %d \n\n\n", num1, num2, num1 / num2);
            break;

        case '%':
            if (num2 == 0)
                printf("Error, Cannot divide by 0, Try Again \n\n\n");
            else
                printf("%d %% %d = %d \n\n\n", num1, num2, num1 % num2);
            break;

        default:
            printf("Error, Please Check and Try Again  \n\n\n");
            break;                                                     //Always break after all cases, be it the default/special cases
    }

    return 0;
}
