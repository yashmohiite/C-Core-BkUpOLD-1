// Solutn Lec = 352

// Referred Solutn, Lec = 353
#include<stdio.h>
#include<stdlib.h>

/*
Write a Program that initializes an array with 8 elements
Each element can have value in range 5 - 10
Using 'Counting Array' & 'Appropriate Mapping' find which value appears the most
in the 'Source Array'. Also print this value & No. of its appearances
sourceArr = 7 5 6 9 6 7 10 7
Result = Value 7 Appeared most, Total 3 Appearances
*/

#define SIZE 8

int main()
{
    int arr[SIZE] = {7,5,6,9,6,7,10,7};
    int countArr[6] = {0};
    int i, maxIndex;

    for(i=0 ; i<SIZE ; i++)
        countArr[arr[i]-5]++;

    maxIndex = 0;

    for(i=1 ; i<6 ; i++)
        if(countArr[i] > countArr[maxIndex])
        maxIndex = 1;

    //Display 'maxIndex + 5' (It's the actual value appeared the most)
    //Display 'countArr[maxIndex]' (No. of Appearances)
    return 0;
}
