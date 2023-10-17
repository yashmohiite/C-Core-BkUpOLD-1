// Solutn Lec = 249

// Reffered Solutn, Lec = 250
#include<stdio.h>

int main()
{
    int i, j;
    int foundDuplicate = 0;
    int nonUniqueCount = 0;
    int values[10];

    for(i=0 ; i<10 ; i++)
    {
        printf("Enter Value #%d : ",i+1);
        scanf("%d", &values[i]);
    }

    for(i=0 ; i<10 ; i++)
    {
        foundDuplicate = 0;
        for(j=0 ; j<i ; j++)
        {
            if(values[i] == values[j])
            {
                foundDuplicate = 1; //Found on the LEft Side
                break;
            }
        }
        if(foundDuplicate == 1)
            break;
        else
            for(j=i+1 ; j<10 ; j++) //Working with the Right Side
        {
            if(values[i] == values[j])
            {
                printf("Non-Unique Value: %d \n", values[i]);
                nonUniqueCount++;
                break;
            }
        }
    }
    printf("Total Unique Nums: %d \n", nonUniqueCount);
    return 0;
}
