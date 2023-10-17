// Solutn Lec = 274

// Reffered Solutn, Lec = 274
#include<stdio.h>
#include<stdlib.h>

char *strcpy(char *destination, char *source)
{
    char *tempPtr;
    int i = 0;
    tempPtr = destination;

    while(source[i] != '\0') //Till we got to the end of source string
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    return tempPtr;
}

int main()
{
    char myNickName[] = "AlphaTech";
    char copyOfNickName[30];
    char *tempResult;
    tempResult = strcpy(copyOfNickName, myNickName);
    printf("The new Copied String is : %s \n", tempResult);
    printf("The new Copied String is : %s \n", copyOfNickName);
    return 0;
}
