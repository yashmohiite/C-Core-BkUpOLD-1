// Solutn Lec = 371

// Referred Solutn, Lec = 371
#include<stdio.h>
#include<stdlib.h>

/*
EOF <--> End Of File
*/



int main()
{
    int num1, num2;
    int i;
    FILE* fp;
    fp = fopen("", "r");
    if(fp != NULL)
    {
        while(!(feof(fp)))
            //Code
        fclose(fp);
    }
    return 0;
}
