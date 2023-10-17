// Solutn Lec = 247

// Reffered Solutn, Lec = 248

/*
Part 1: Print all Unique Elements in an Array
Part 2: Count the No. of Unique Elements in an Array
*/
#include<stdio.h>
int main()
{
    int i, j, uniqueCount = 0, foundDuplicate = 0, values[10];

    for(i=0 ; i<10 ; i++)
    {
        printf("Enter value #%d: ", i+1);
        scanf("%d", &values[i]);
    }

    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<10 ; j++)
        {
            if(i==j)
                continue;
            if(values[i] == values[j])
            {
                foundDuplicate = 1;
                break;
            }
        }
        if(foundDuplicate != 1)
        {
            printf("Unique Value: %d\n", values[i]);
            uniqueCount++;
        }
        else
            foundDuplicate = 0;
    }
    printf("Total No of Unique Nums : %d\n", uniqueCount);

    return 0;
}
