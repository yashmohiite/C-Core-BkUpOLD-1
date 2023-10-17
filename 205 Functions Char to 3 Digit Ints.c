// Solutn Lec = 205

//Reffered Solutn, Lec = 205

/*

'a', 'b', 'F', '$', '*', ' ', '1', '2', '9', '0', etc

'0' --> 48
'9' --> 57

Function that receives 3 characters
If all the characters are of a digit type ('0' --> '9')
    an integer which is a decimal representation of this 3 digits number
Otherwise, return 0

Ex:

'1', '5', '9'
        Return 159
'2', '0', '6'
        Return 206
*/
#include<stdio.h>
#include<stdlib.h>
int charactersToInteger(char character1, char character2, char character3)
{
    int hundreds, tens, units, finalResult;

    if(character1 >= '0' && character1 <= '9')
        hundreds = character1 - '0'; //1
    else
        return 0;

    if(character2 >= '0' && character2 <= '9')
        tens = character2 - '0'; //5
    else
        return 0;

    if(character3 >= '0' && character3 <= '9')
        units = character3 - '0'; //9
    else
        return 0;

    return hundreds * 100 + tens * 10 + units;
}

int main()
{
    return 0;
}
