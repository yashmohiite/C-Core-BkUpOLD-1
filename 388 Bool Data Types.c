// Solutn Lec = 388

// Referred Solutn, Lec = 388
#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>
/*

*/

typedef enum{false, true} bool; //1st way

int main()
{
    //2nd Way:
    bool still_raining = true;
    while(still_raining)
    {
        printf("It's still raining... Rain Rain Rain...\n");
        still_raining = false;
    }
    printf("Oh it stopped raining...Finally a Sunny Day\n");
    return 0;
}
