// Solutn Lec = 225

//Reffered Solutn, Lec = 225
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
/*
Program should check and print if Array has at least One element with "Good Neighbor"
-An element with good neighbors has a value that equals to the Mul of both its neighbors(Right, Left),
Ex 1 : [1,3,2,6,3]--> "Array has 'Good Neighbors' 6=2 * 3
Ex 2 : [4,4,7,4,9]--> Array doesn't have Good Neighbors
*/
int main()
{
    int myArr[SIZE];
    int i;
    int hasGoodNeighbors = 0;   //Assumption : Array doesn't have Good Neighbors

    for(i=0 ; i<SIZE ; i++)
    {
        printf("Enter value %d :", i+1);
        scanf("%d", &myArr[i]);
    }
    //1st & Last Element don't have at least One Neighbor, so start from one ahead and stop at one before
    for(i=1 ; i<SIZE ; i++)
    {
        if(myArr[i] == myArr[i-1] * myArr[i+1])
        {
            printf("This Array has Good Neighbors!!\n");
            hasGoodNeighbors = 1;   //Has Good Neighbors
            return 0;
        }
    }

    printf("This Array doesn't have any Good Neighbors\n");

    return 0;
}
