// Solutn Lec = 374

// Referred Solutn, Lec = 375
#include<stdio.h>
#include<stdlib.h>

/*
C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
*/



int main()
{
    char myChar;
    int totalLines = 1;
    FILE* fp;
    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt", "r");
    if(fp != NULL)
    {
        while((myChar = fgetc(fp)) != EOF)
        {
            if(myChar == '\n')
                totalLines++;
        }
        printf("No of Lines: %d\n", totalLines);
        fclose(fp);
    }
    return 0;
}
