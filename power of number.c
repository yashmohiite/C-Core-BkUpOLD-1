#include<stdio.h>

int main ()

{
    int num, pow, realpow, result = 1;

    printf("Enter the num: \n");
    scanf("%d", &num);

    printf("Enter power of num: \n");
    scanf("%d", &pow);

    realpow = pow;

    while (pow > 0)

    {
        result = result * num;             // result *= num
        pow = pow - 1;                     // pow--
    }

    printf("%d ^ %d = %d \n", num, realpow, result);

    return 0;
}
