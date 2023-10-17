// Solutn Lec = 378

// Referred Solutn, Lec = 379
#include<stdio.h>
#include<stdlib.h>

/*
C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
*/



int main()
{
    int num1, num2, i;
    FILE* fp;
    fp = fopen("C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt", "r");
    if(fp != NULL)
    {
        for(i=1 ; i<=10 ; i++)
        {
            fscanf(fp, "%d%d", &num1, &num2);
            printf("Read: %d %d\n", num1, num2);
        }
        fclose(fp);
    }
    return 0;
}
