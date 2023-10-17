// Solutn Lec = 324

// Reffered Solutn, Lec = 324
#include<stdio.h>
#include<stdlib.h>

/*

*/

typedef struct date
{
    int day;
    int month;
    int year;
}Date;

void printDate(Date dt)
{
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

Date inputDate()
{
    Date dt;
    printf("Enter Day (1 - 31): ");
    scanf("%d", &dt.day);
    printf("Enter Month (1 - 12): ");
    scanf("%d", &dt.month);
    printf("Enter Year (yy): ");
    scanf("%d", &dt.year);
    return dt;
}

void printNextDay(Date dt)
{
    dt.day = dt.day + 1; //dt.day++
    if(dt.day > 31)
    {
        dt.day = 1;
        dt.month++;
        if(dt.month > 12)
        {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("The Next Day is : \n");
    printDate(dt);
}

int main()
{
    Date todayDate = {31, 12, 2009};
    printf("Current Date: \n");
    printDate(todayDate);
    printNextDay(todayDate);
    return 0;
}
