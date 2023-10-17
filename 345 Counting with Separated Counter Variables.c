// Solutn Lec = 345

// Referred Solutn, Lec = 345
#include<stdio.h>
#include<stdlib.h>

/*
Counting Appearances of Array with Values {0, 1}
Given an array of a given size, The array consists only of values {0,1}
0 1 0 1 0 0 1 0
We would like to know:
-Number of appearances of value 0 in the array
-Number of appearances of value 1 in the array
*/

#define SIZE 8

int main()
{
    int arr[SIZE] = {0,1,0,1,0,0,1,0};
    int count0 = 0, count1 = 0;
    int i;
    for(i=0 ; i<SIZE ; i++)
    {
        if(arr[i] == 0)
            count0++;
        else if(arr[i]==1)
            count1++;
    }
    //From this point on we know how many 0s & 1s are in the array
    return 0;
}
//If more values like 0, 1, 2 or more we need to search, more counters
//& not efficient
