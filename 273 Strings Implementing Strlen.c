// Solutn Lec = 273

// Reffered Solutn, Lec = 273
#include<stdio.h>
#include<stdlib.h>

int strlen(char *str);

int main()
{


    return 0;
}

int strlen(char *str)
{
    int i;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
