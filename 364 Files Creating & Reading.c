// Solutn Lec = 364

// Referred Solutn, Lec = 364
#include<stdio.h>
#include<stdlib.h>

/*

*/



int main()
{
    FILE* fp;

    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt", "w");
    //In above If File doesn't Exists, Create One. If Exists, then overwrite it (Data here is Lost everytime in this mode)
    if(fp == NULL)
        printf("The Opening of the file has Failed\n");
    else //fp != NULL
    {
        printf("The file is Opened for Writing\n");

        fclose(fp);
    }



    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt", "r");
    //In above If File doesn't Exists, Create One. If Exists, then overwrite it (Data here is Lost everytime in this mode)
    if(fp == NULL)
        printf("The Opening of the file has Failed\n");
    else //fp != NULL
    {
        printf("The file is Opened for Reading\n");

        fclose(fp);
    }

    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile2.txt", "r"); //File didn't exist, so opening failed. This is Diff betn 'w' & 'r'.
    //In above If File doesn't Exists, Create One. If Exists, then overwrite it (Data here is Lost everytime in this mode)
    if(fp == NULL)
        printf("The Opening of the file has Failed\n");
    else //fp != NULL
    {
        printf("The file is Opened for Writing\n");

        fclose(fp);
    }
    return 0;
}
