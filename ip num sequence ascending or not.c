// Solutn : Lec = 183

// VERY IMP Quest & Solutn

#include<stdio.h>

int main ()
{
    int sequenceSize;

    int previousValue = 0, currentValue = 0;   // Assuming sequence of Positive Values

    int veryAscendingFlag = 1;       // Initial Assumption : Sequence is Very Ascending

    do
    {
        printf("Insert size (total size of the Seq = greater than Zero) : \n");
        scanf("%d", &sequenceSize);
    }while (sequenceSize <= 0);

    do
    {
        printf("Insert Value : \n");
        scanf("%d", &currentValue);

        if (currentValue < 0)
            printf("Number isn't positive! \n");

        else
        {
            if (currentValue <= previousValue)     // Not Very Ascending
            {
                veryAscendingFlag = 0;
                break;
            }

            previousValue = currentValue;
            sequenceSize --;
        }
    }while (sequenceSize > 0);

    if (veryAscendingFlag == 1)
        printf("This seq is very Ascending \n");
    else      // veryAscendingFlag != 1

        printf("This seq is not very Ascending \n");

    return 0;
}
