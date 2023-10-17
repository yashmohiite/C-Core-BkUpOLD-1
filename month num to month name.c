#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter month num: \n");
    scanf("%d", &num);
    switch(num)
    {
    case 1:                     //note here (case '1':) is not valid means no single quotes for a case other than char type
        printf("The month name is Jan \n");
        break;
    case 2:
        printf("The month name is Feb \n");
        break;
    case 3:
        printf("The month name is Mar \n");
        break;
    case 4:
        printf("The month name is Apr \n");
        break;
    case 5:
        printf("The month name is May \n");
        break;
    case 6:
        printf("The month name is Jun \n");
        break;
    case 7:
        printf("The month name is Jal \n");
        break;
    case 8:
        printf("The month name is Aug \n");
        break;
    case 9:
        printf("The month name is Sep \n");
        break;
    case 10:
        printf("The month name is Oct \n");
        break;
    case 11:
        printf("The month name is Nov \n");
        break;
    case 12:
        printf("The month name is Dec \n");
        break;
    default:
        printf("Check again and enter the value \n");
        break;
    }
    return 0;
}
