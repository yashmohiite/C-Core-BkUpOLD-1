// Solutn Lec = 384

// Referred Solutn, Lec = 385
#include<stdio.h>
#include<stdlib.h>

/*
C:/Users/yashm/OneDrive/Documents/Udemy C Lang Bootcamp/Working with Files/myFirstFile.txt
Write a program that reads a filename from the user
The program should create a "frequencyAppearances" array
for lowercase latters ('a' - 'z') &
Print the (first) character that appeared most of the times
*/



int main()
{
    char filename[20] = {0};
    char currentChar;
    int i;
    int maxIndex = 0;
    int frequencyArray[26] = {0};
    FILE* fp;

    printf("Enter a filename you want to test:");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp != NULL)
    {
        while(!feof(fp))
        {
            currentChar = fgetc(fp);
            if(currentChar >= 'a' && currentChar <= 'z')
                frequencyArray[currentChar - 'a']++;
        }
    }

    for(i=1 ; i<26 ; i++)
    {
        if(frequencyArray[maxIndex] < frequencyArray[i])
            maxIndex = i;
    }
    printf("The max appearances of a lowercase is of Char: %c\n", maxIndex + 'a');
    printf("The No of its appearances is: %d\n", frequencyArray[maxIndex]);
    return 0;
}
