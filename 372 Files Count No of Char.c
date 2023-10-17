// Solutn Lec = 372

// Referred Solutn, Lec = 373
#include<stdio.h>
#include<stdlib.h>

/*
C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
*/



int main()
{
    char myChar;
    int countOfChar = 0;
    FILE* fp;
    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt", "r");
    if(fp != NULL)
    {
        while((myChar = fgetc(fp)) != EOF)
        {
            printf("%c", myChar);
            countOfChar++;
        }
        printf("\nThe total No of Chars in File: %d\n", countOfChar);
        fclose(fp);
    }
    return 0;
}
