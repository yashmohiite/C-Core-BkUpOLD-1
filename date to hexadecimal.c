#include<stdio.h>

int main ()

{
    int day, month, year;

    printf("Enter day : \n");
    scanf("%d", &day);

    printf("Enter month : \n");
    scanf("%d", &month);

    printf("Enter year : \n");
    scanf("%d", &year);

    printf("Day : 0x%X \n", day);        //Note here placeholders for hexadecimal

    printf("Month : 0x%X \n", month);

    printf("Year : 0x%X \n", year);

    return 0;
}
