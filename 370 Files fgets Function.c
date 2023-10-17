// Solutn Lec = 370

// Referred Solutn, Lec = 370
#include<stdio.h>
#include<stdlib.h>

/*
fgets(<string>, <int/length_limit>, <pointer_to_a_file>)
*/



int main()
{
    char myString[10];
    int count = 0;
    FILE* fp;
    fp = fopen("", "r");

    if(fp != NULL)
    {
        while(fgets(myString, 10, fp))
            printf("String %d read: %s\n", ++count, myString);
        fclose(fp);
    }
    return 0;
}
