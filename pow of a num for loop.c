#include<stdio.h>

int main ()

{
    int pow, num, result = 1, i;

    printf("Enter Num : \n");
    scanf("%d", &num);

    printf("Enter Pow : \n");
    scanf("%d", &pow);

    for (i = 1 ; i <= pow ; i++)
    {
        result = result * num;
    }

    printf("%d in Pow of %d = %d \n", num, pow, result);

    return 0;
}
