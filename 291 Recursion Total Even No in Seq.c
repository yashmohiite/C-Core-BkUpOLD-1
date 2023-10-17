// Solutn Lec = 291

// Reffered Solutn, Lec = 292
#include<stdio.h>
#include<stdlib.h>

/*
Write Recursive func  that will Calc & return the Total No of Occurences of Even Num in a Seq,
Read a Seq of Int from User up Until -1 Discovered to Stop Entering
EX: 1,3,4,6,-1 --> 2
*/

int totalOccurencesEvenNumbers()
{
    int inputUser;
    printf("Enter a Num: ");
    scanf("%d", &inputUser);

    //Base/Stopping Condition
    if(inputUser == -1)
        return 0;

    //Recursive Calls if Passed Checked
    if(inputUser % 2 == 0)
        return 1 + totalOccurencesEvenNumbers();

    return totalOccurencesEvenNumbers();
}

int main()
{
    int totalOccurences;
    totalOccurences = totalOccurencesEvenNumbers();
    printf("Total Occurrences of Even Numbers in the Seq you Inserted is : %d\n", totalOccurences);

    return 0;
}
