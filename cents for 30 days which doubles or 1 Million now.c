#include<stdio.h>

//   Sample solution slightly different, refer it too

int main ()

{
    int i, tc = 1;

    for (i = 1 ; i <= 30 ; i++)
    {
        printf("Day %d, Amount : %d \n", i, tc);     // Imp Step
        tc = tc * 2;
    }

    printf("Total cents after 1 month (30 Days) : %d \n", tc);
    printf("Total Dollars : %.2f \n", tc / 100.0);

    return 0;
}
