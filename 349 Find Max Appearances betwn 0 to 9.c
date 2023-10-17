// Solutn Lec = 349

// Referred Solutn, Lec = 350
#include<stdio.h>
#include<stdlib.h>

/*
sourceArr = 0 5 4 9 5 8 2 3 1 5 4 9 5 5 2 7 6 5 4 1 {Index 0 to 19}
countArr = 0 0 0 0 0 0 0 0 0 0 {Index 0 to 9}
*/

#define SIZE 20

int main()
{
    int arr[SIZE] = {0,5,4,9,5,8,2,3,1,5,4,9,5,5,2,7,6,5,4,1};
    int countArr[10] = {0};
    int i, maxIndex;

    for(i=0 ; i<SIZE ; i++)
        countArr[arr[i]]++;

    maxIndex = 0; //Assuming 1st Element appeared the most
    for(i=1 ; i<10 ; i++)
        if(countArr[i] > countArr[maxIndex])
        maxIndex = i;
    //Display 'maxIndex' (It's the actual value appeared the most)
    //Display 'countArr[maxIndex]' (No. of Appearances)
    return 0;
}
