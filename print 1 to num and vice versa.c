#include<stdio.h>

int main ()

{
    int num, i = 1, j;

    printf("Enter num till which you want to print \n");
    scanf("%d", &num);

    while(i <= num)
    {
        printf("%d ", i);  //Note space in double quotes after place holder   //Alternative:        printf("%d"), i++
        i++;
    }

    printf("\n");

    j = num;
    while(j > 0)
    {
        printf("%d ", j);  //Note space in double quotes after place holder
        j--;
    }

    return 0;
}


//VERY IMP    // Solution : Lec 169     //Note imp concept to display and implement in 1 line of printf shown above
