// Solutn Lec = 257

// Reffered Solutn, Lec = 258
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 4
int main()
{
    int values[SIZE] = {-1,2,3,-6};
    int i, j, minSum = values[0] + values[1];
    int index1=0, index2=1;
    int currentSum;

    for(i=0 ; i<SIZE ; i++)
    {
        for(j=i+1 ; j<SIZE ; j++)
        {
            currentSum = values[i] + values[j];
            if(abs(currentSum) < abs(minSum))
            {
                minSum = currentSum;
                index1 = i;
                index2 = j;
            }
        }
    }
    printf("The Min Sum Nums are %d & %d and Min Sum is %d", values[index1], values[index2], minSum);

    return 0;
}
