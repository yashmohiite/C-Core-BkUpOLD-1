// Solutn Lec = 323

// Reffered Solutn, Lec = 323
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

int main()
{
    Date graduationDate, todayDate;
    graduationDate = inputDate();
    todayDate = inputDate();
    printDate(graduationDate);
    printDate(todayDate);
    return 0;
}
