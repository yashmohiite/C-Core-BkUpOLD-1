// Solutn Lec = 346

// Referred Solutn, Lec = 346
#include<stdio.h>
#include<stdlib.h>

/*

*/

#define SIZE 8

int main()
{
    int arr[SIZE] = {0,2,0,1,0,0,2,0}; //Source Array
    int countArr[3] = {0}; //Counter Array //Why 3 Size, because Only 3 types of Values in Source Array are Appearing in this case
    int i;

    for(i = 0 ; i<SIZE ; i++)
    {
        if(arr[i] == 0)
            countArr[0]++;
        else if(arr[i] == 1)
            countArr[1]++;
        else if(arr[i] == 2)
            countArr[2]++;
    }
    //From this point on we know how many 0s 1s 2s or more values
    //appeared with help of counter arrays(each element dedicated to 1 value counter)
    //But still not efficient since if-else code generates more(lengthy)

    //Efficient Way: By Mapping SourceArr with CountArr:

    int arr2[SIZE] = {0,2,0,1,0,0,2,0};
    int countArr2[3] = {0};
    int i2;

    for(i2=0 ; i2<SIZE ; i2++)
    {
        countArr2[arr2[i2]]++;
    }

    return 0;
}
