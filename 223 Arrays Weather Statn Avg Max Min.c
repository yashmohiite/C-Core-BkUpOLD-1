// Solutn Lec = 223

//Reffered Solutn, Lec = 224
#include<stdio.h>
#include<stdlib.h>

# define SIZE 7

int main()
{
    float temperature[SIZE];
    int i;
    float sum = 0.0, average_temp;
    int hottest_day = 0, coldest_day = 0;   //Assumed Indexes

    for(i=0 ; i<SIZE ; i++)
    {
        printf("Enter the Temp at Day %d : ", i+1);
        scanf("%f", &temperature[i]);
    }

    for(i=0 ; i<SIZE ; i++)
    {
        sum = sum + temperature[i];
        if(temperature[hottest_day] < temperature[i])
        {
            hottest_day = i;
            continue;   //IMP
        }
        if(temperature[coldest_day] > temperature[i])
        {
            coldest_day = i;
        }
    }

    average_temp = sum / SIZE;

    printf("The Average Temp = %f \n", average_temp);
    printf("The hottest day of the week was at day %d \n", hottest_day + 1);
    printf("The temp on hottest day was %f \n", temperature[hottest_day]);
    printf("The coldest day of the week was at day %d \n", coldest_day + 1);
    printf("The temp on coldest day was %f \n", temperature[coldest_day]);

    return 0;
}
