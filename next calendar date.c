#include<stdio.h>
#include<stdlib.h>

//refer original solution provided few cases not running

/*
Examples :
30/10/2001 - 31/10/2001
25/12/1998 - 26/12/1998
28/02/2020 - 29/02/2020 (Leap Year (Feb))
28/02/2019 - 01/03/2019 (New Month (Feb))
*/

int main()

{
    int d, m, y;
    int ly = 0;    //default

    printf("Enter day, month and year: \n");
    scanf("%d%d%d", &d, &m, &y);

    //find if given year is leap year or not
    if (m == 2) //If its February
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        ly = 1;

    d += 1; //day = day + 1

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (d <= 31)
            break;  //That is OK
    case 4:
    case 6:
    case 9:
    case 11:
        if (d <= 30)
            break; //That is OK
    case 2: //February
        if (d <= 29 && ly == 1)
            break;
        else if (d <= 28)
            break;
    default:
        d = 1;
        m += 1; //month = month + 1
        if (m > 12)
        {
            m = 1;
            y += 1; //year = year + 1
        }
    printf("The next date is : %d / %d / %d  \n", d, m, y);

    }

    return 0;
}

/*
Q n A
Code 1 :

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date, month, year;

    printf("Enter date: ");
    scanf("%d", &date);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

  //Month and Date validation
    //month validation
    if (month > 12)
    {
        printf("Error..\nPlease enter a valid month");
    }

    //31 days month validation
    else if ((month == 1||3||5||7||8||10||12) && (date > 31))
    {
        printf("Error..\nPlease enter a valid Date");
    }

    //30 days month validation
    else if ((month == 4||6||9||11) && (date > 30))
    {
        printf("Error..\nPlease enter a valid Date");
    }

    //leap year
    else if ((year % 400 == 0 || year % 4 == 0) && (month == 2) && (date == 28))
    {
        printf("1 / %d / %d", (month+1), year);
    }

    //February
    else if ((month == 2) && (date < 29))
    {
        printf("%d / %d / %d", (date+1), month, year);
    }
    else if ((month == 2) && (date == 29))
    {
        printf("1 / %d / %d", (month+1), year);
    }

    //new year
    else if ((month == 12) && (date == 31))
    {
        printf("1 / 1 / %d", (year+1));
    }

    //for moths of 30 days
    else if ((month == 4||6||9||11) && (date < 30))
    {
        printf("%d / %d / %d", (date+1), month, year);
    }
    else if ((month == 4||6||9||11) && (date == 30))
    {
        printf("1 / %d / %d", (month+1), year);
    }

    //for months of 31 days
    else if ((month == 1||3||5||7||8||10) && (date < 31))
    {
        printf("%d / %d / %d", (date + 1), month, year);
    }
    else if ((month == 1||3||5||7||8||10) && (date == 31))
    {
        printf("1 / %d / %d", (month + 1), year);
    }

}









Code 2 :

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date, month, year;

    printf("Enter date: ");
    scanf("%d", &date);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
    //31 days months
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (date < 31)
        {
           date += 1; //date = date + 1;
           break;
        }
        else if (date == 31)
        {
            //updating year on 31/12
            if (month == 12)
            {
                date = 1;
                month = 1;
                year += 1;  //year = year + 1;
                break;
            }
            else
            {
                date = 1;
                month += 1;
            }

        }
        else
        {
            printf("Error..\nPlease enter a valid date");
            return 0;   //THIS LINE IS IMPORTANT
        }
    //30 days months
    case 2:
        if (year % 4 == 0 || year % 400 == 0)
        {
            if (date < 29)
            {
                date += 1;
                break;
            }
            else if (date == 29)
            {
                date = 1;
                month += month;
                break;
            }
            else
            {
                printf("Error..\nPlease enter a valid date\n");
                printf("There cannot be more than 29 days in February in leap year");
                return 0;
            }
        }
        else
        {
            if (date < 28)
            {
                date += date;
                break;
            }
            else if (date == 28)
            {
                date = 1;
                month += month;
                break;
            }
            else
            {
                printf("Error..\nPlease enter a valid date\n");
                printf("There are only 28 days in February until it is a leap year");
                return 0;
            }
        }
    case 4:
    case 6:
    case 9:
    case 11:
        if (date < 30)
        {
            date += 1;
            break;
        }
        else if (date == 30)
        {
             date = 1;
             break;
        }
        else
        {
           printf("Error..\nPlease enter a valid date2");
           return 0;    //THIS LINE IS IMPORTANT
        }

    default:
        {
            printf("Error..\nPlease enter a valid month");
            return 0;
        }
    }

        printf("the next day is: %d / %d / %d", date, month, year);
}
*/
