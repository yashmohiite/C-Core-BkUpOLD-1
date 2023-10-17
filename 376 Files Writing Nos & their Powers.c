// Solutn Lec = 376

// Referred Solutn, Lec = 377
#include<stdio.h>
#include<stdlib.h>

/*
C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
*/



int main()
{
    int i;
    FILE* fp;
    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt", "w");
    if(fp != NULL)
    {
        for(i=1 ; i<=10 ; i++)
            fprintf(fp, "%d %d\n", i, i*i);
        fclose(fp);
    }
    return 0;
}
