// Solutn Lec = 226

// Reffered Solutn, Lec = 226
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, pullUpsArray[10];

    for(i=0 ; i<10 ; i++)
    {
        printf("Enter No of Pullups on day %d:\n", i+1);
        scanf("%d", &pullUpsArray[i]);
    }

    for(i=9 ; i>=0 ; i--)
    {
        printf("%d days ago you did %d pullups\n", 10-i-1, pullUpsArray[i]);
    }

    return 0;
}
