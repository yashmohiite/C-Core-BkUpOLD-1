//While Loop :
/*
#include<stdio.h>

int main()

{
    int price, totalPrice = 0;

    printf("Please enter a Price : \n");
    scanf("%d", &price);

    while (price != 0)
    {
        totalPrice = totalPrice + price;
        printf("Please enter a Price : \n");
        scanf("%d, &price");
    }

    printf("Total Order Price = %d \n", totalPrice);

    return 0;
}
*/

//Do While Loop :

int main()
{
    int price, totalPrice = 0;                  //Note structure/syntax of do while, and note semicolons carefully
    do {
        printf("Please enter a price: ");
        scanf("%d", &price);
        totalPrice = totalPrice + price;
    } while (price != 0);

    printf("Total Order Price = %d \n", totalPrice);
    return 0;
}
