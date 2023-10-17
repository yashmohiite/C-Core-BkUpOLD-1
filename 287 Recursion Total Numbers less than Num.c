// Solutn Lec = 287

// Reffered Solutn, Lec = 288
#include<stdio.h>
#include<stdlib.h>

/*
Write a Recursive Function that will receive an Int Value 'Num'
Read a Sequence of Numbers from the User Up Until '-1' in Encountered for Stop
Return the Total No. of Values Smaller than the 'Num' Entered before
Ex:
num = 5 ; Sequence = 6,8,10,3,1,7,-1 ; Return 2
*/

int totalSmaller(int num)
{
    int inputUser;
    printf("Enter a Num: ");
    scanf("%d", &inputUser);
    if(inputUser == -1)
        return 0;
    if(inputUser < num)
        return 1 + totalSmaller(num);
    return totalSmaller(num);
}

int main()
{
    int num = 4;
    int totalSmallerNumbers = totalSmaller(num);

    printf("Total Smaller No. than %d in Sequence is %d ", num, totalSmallerNumbers);
    return 0;
}
