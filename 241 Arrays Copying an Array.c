// Solutn Lec = 241

// Reffered Solutn, Lec = 242
#include<stdio.h>
#include<stdlib.h>

#define SIZE 3
//day, month, year
int main()
{
    int date[SIZE] = {1, 2, 2000};
    int date2[SIZE]; //{ , , }
    int i;

    for(i=0 ; i<SIZE ; i++)
    {
        date2[i] = date[i];
    }
    for(i=0 ; i<SIZE ; i++)
    {
        printf("Original Date[%d] - %d\n", i, date[i]);
        printf("Copied Date[%d] - %d\n", i, date2[i]);
    }

    return 0;
}
