// Solutn Lec = 380

// Referred Solutn, Lec = 381
#include<stdio.h>
#include<stdlib.h>

/*
//Path: C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
Write a Program that reads a filename and a certain character from the user
The program should calc & print the total appearances of the char in the file
*/



int main()
{
    char desiredCharacter;
    char fileName[20] = {0};
    int countAppearances = 0;
    FILE* fp;

    printf("Enter a filename you want to test:");
    scanf("%s", fileName);

    printf("Enter a desired character:");
    scanf(" %c", &desiredCharacter); //Make sure to give Space before '%c' so Enter cannot be treated as an input Character

    fp = fopen(fileName, "r");

    if(fp != NULL)
    {
        while(!feof(fp))
            if(fgetc(fp) == desiredCharacter)
                countAppearances++;
    }
    printf("Total appearances of character %c: %d\n", desiredCharacter, countAppearances);
    return 0;
}
