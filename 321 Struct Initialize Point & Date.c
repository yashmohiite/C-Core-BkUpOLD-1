// Solutn Lec = 321

// Reffered Solutn, Lec = 321
#include<stdio.h>
#include<stdlib.h>

/*

*/

struct point
{
    int x;
    int y;
};

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct point p1;
    printf("Enter X Coordinates: ");
    scanf("%d", &p1.x);
    printf("Enter Y Coordinates: ");
    scanf("%d", &p1.y);

    printf("The Point is (%d, %d)\n", p1.x, p1.y);

    //Date:
    struct date graduateDate;
    printf("Enter Day: ");
    scanf("%d", &graduateDate.day);
    printf("Enter Month: ");
    scanf("%d", &graduateDate.month);
    printf("Enter Year: ");
    scanf("%d", &graduateDate.year);

    printf("The Graduation Date is: %d / %d / %d \n", graduateDate.day, graduateDate.month, graduateDate.year);
    return 0;
}
