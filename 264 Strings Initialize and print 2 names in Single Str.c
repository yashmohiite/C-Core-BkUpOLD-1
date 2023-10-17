// Solutn Lec = 264

// Reffered Solutn, Lec = 265
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char fullName[] = "Abcd Efgh Ijkl Mnop";
    int i = 0;
    while(fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }

    return 0;
}
