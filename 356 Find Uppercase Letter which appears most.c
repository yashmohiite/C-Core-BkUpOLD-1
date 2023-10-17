// Solutn Lec = 356

// Referred Solutn, Lec = 357
#include<stdio.h>
#include<stdlib.h>

/*

*/

#define SIZE 8

int main()
{
    char arr[SIZE] = {'K', 'I', 'B', 'R', 'C', 'K', 'Z', 'M'};
    int countArr[26] = {0};
    int i, maxIndex;

    for(i=0 ; i<SIZE ; i++)
        countArr[arr[i] - 'A']++; //countArr[arr[i]-65]++;

    maxIndex = 0;

    for(i=0 ; i<26 ; i++)
        if(countArr[i] > countArr[maxIndex])
            maxIndex = i;

    //Display "maxIndex + 'A' " (It's the letter appeared the most)
    //Display "countArr[maxIndex]" (No. of appearances)
    return 0;
}
