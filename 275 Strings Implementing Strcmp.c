// Solutn Lec = 275

// Reffered Solutn, Lec = 275
#include<stdio.h>
#include<stdlib.h>

int strcmp(char *str1, char *str2)
{
    int i = 0, flag = 0;
    while(flag == 0) //As Long As we didn't find any different char
    {
        if(str1[i] < str2[i])
            flag = -1;
        else if (str1[i] > str2[i])
            flag = 1;

        if(str1[i] == '\0')
            break;

        i++;
    }
    return flag;
}
int main()
{
    char str1[] = "AlphaTech";
    char str2[] = "BalphaTech";

    int result = strcmp(str1, str2);
    printf("-1  0  1, out of these, result is : %d", result);

    return 0;
}
