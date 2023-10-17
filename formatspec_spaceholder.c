#include<stdio.h>
#include<stdlib.h>

int main()
{
    //format specification/space holders for int/char/float etc
    printf("hi this is %d\n", 20);
    printf("this is %d and %d, it gives %d+%d=%d and %d/%d=%d\n\n\n", 10,5,10,5,10+5,10,5,10/5);

    //first calc with 5 and 2
    printf("%d + %d = %d\n", 5, 2, 5+2);
    printf("%d - %d = %d\n", 5, 2, 5-2);
    printf("%d * %d = %d\n", 5, 2, 5*2);
    printf("%d / %d = %d\n", 5, 2, 5/2);
    printf("%d %% %d = %d\n\n\n", 5, 2, 5%2); //note here "double %%"

    //asterisk rectangle
    printf("**********\n**********\n**********\n**********\n**********\n\n\n");

    //asterisk pattern with nos. (with 2 printf in second method)
    printf("1*********\n12********\n123*******\n1234******\n12345*****\n\n\n");

    //'X' shape with asterisk
    printf("*     *\n *   * \n  * *  \n   *   \n  * *  \n *   * \n*     *\n\n\n");

    //year of birth = current year - age
    printf("year of birth = current year - age\n%d - %d = %d\n\n\n", 2022, 22, 2022-22);


    return 0;
}
