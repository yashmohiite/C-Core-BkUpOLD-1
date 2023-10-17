// Solutn Lec = 358

// Referred Solutn, Lec = 359
#include<stdio.h>
#include<stdlib.h>

/*

*/

#define SIZE 8

int main()
{
    char arr[SIZE] = {'K', 'O', 'c', 'R', 'C', ' ', 'K', 'r'};
    int countArr[52] = {0};
    int i, maxIndex;

    for(i=0 ; i<SIZE ; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
            countArr[arr[i] - 'a']++;
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
            countArr[arr[i] - 'A' + 26];
    }

    maxIndex = 0;

    for(i=1 ; i<52 ; i++)
        if(countArr[i] > countArr[maxIndex])
            maxIndex = i;

    if(maxIndex < 26)
        //Display 'maxIndex + 'a'' (It's the letter appeared the most)
        //Display "countArr[maxIndex]" (No. of appearances)
    else
        //Display "maxIndex - 26 + 'A'" (It's the letter appeared the most)
        //Display "countArr[maxIndex]" (No. of appearances)
    return 0;
}
