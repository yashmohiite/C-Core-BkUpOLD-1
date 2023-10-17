// Solutn Lec = 203 204

//Reffered Solutn, Lec = 203 204
#include<stdio.h>
#include<stdlib.h>
/*
Functn Name --> toLower
Receive a Char
If this char is a Upper Case Letter
    Return the Lower Case Equivalent
Otherwise, return -1

Examples:
    K --> k
    B --> b
    4 --> -1

*/

char toLower(char letter)
{
    if(letter>= 'A' && letter <= 'Z') // 'C' --> 67, 'A' --> 65
        return letter - 'A' + 'a';
    return -1;
}

char toUpper(char letter)
{
    if(letter >= 'a' && letter <= 'Z')
        return letter - 'a' + 'A';
    else return -1;
}

int main()
{
    return 0;
}
