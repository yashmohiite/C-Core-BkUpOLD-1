// Solutn Lec = 270

// Reffered Solutn, Lec = 271
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char sentence[30];
    int countWords = 0, i;

    printf("Enter a Str / Sentence / Text: \n");
    gets(sentence);

    for(i=0 ; i<strlen(sentence) ; i++)
    {
        if(sentence[i] == ' ')
            countWords++;
    }
    countWords++;
    printf("Total Amount of Words in '%s' is = %d\n", sentence, countWords);
    return 0;
}
