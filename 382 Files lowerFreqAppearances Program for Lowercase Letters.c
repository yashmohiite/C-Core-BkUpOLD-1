// Solutn Lec = 382

// Referred Solutn, Lec = 383
#include<stdio.h>
#include<stdlib.h>

/*
C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
Write a program that reads a filename from the user
The program should create a "frequencyAppearances" array
for lowercase letters ('a' - 'z') and
print the number of times each lowercase letter appears in the file
*/



int main()
{
    char filename[20] = {0};
    char currentChar;
    int i;
    int frequencyArray[26] = {0};
    FILE* fp;

    printf("Enter a filename you want to test:");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp!= NULL)
    {
        while(!feof(fp))
        {
            currentChar = fgetc(fp);
            if(currentChar >= 'a' && currentChar <= 'z') //currentChar holds a lowercase letter
                frequencyArray[currentChar - 'a']++;
        }
    }

    printf("Total Appearances of lowercase letters in file '%s':\n", filename);
    for(i=0 ; i<26 ; i++)
    {
        printf("Letter '%c' appears %d times\n", i + 'a', frequencyArray[i]);
    }
    return 0;
}
