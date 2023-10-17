// Solutn Lec = 333

// Reffered Solutn, Lec = 334
#include<stdio.h>
#include<stdlib.h>

/*
Design & Develop a Rational Num Struct, called Rational
A rational No. consists of 2 Parts: 1]Numerator  2]Denominator
Ex: 1/3  2/5  7/3  .....
Provide Inc, Dec, Add, Sub, Mul, Div, Small, Big, Equal & Not Equal Functions to make
relational / mathematical operations on variables of rational type

Write a "main function" to check out the correctness of your functions
Print the results before and after any operation that you do

Assume both "Numerator" & "Denominator" are > 0
*/

typedef struct rational
{
    int numerator;
    int denominator;
}Rational;

void rationalIncrement(Rational *rPtr)
{
    //r++ <==> +1 (1/1)
    //The Denominator stays the same. Only expanding (1/1) to meet (denominator/de
    (*rPtr).numerator = (*rPtr).numerator + (*rPtr).denominator;
} //When Calling:
//Rational r1 = {1,3};
//rationalIncrement(&r1);

void rationalDecrement(Rational *rPtr)
{
    //r-- <==> -1 (1/1)
    //The Denominator stays the same, Only expanding (1/1) to meet (denominator/de
    (*rPtr).numerator = (*rPtr).numerator - (*rPtr).denominator;
}

Rational rationalAddition(Rational r1, Rational r2)
{
    // r1 + r2
    Rational result;
    result.denominator = r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.denominator + r2.numerator + r1.denominator;
    return result;
}// When Calling:
//Rational r1 = {1,3}, r2 = {2,5};
//Rational r3 = rationalAddition(r1, r2);

Rational rationalSubtraction(Rational r1, Rational r2)
{
    //r1 - r2
    Rational result;
    result.denominator = r1.denominator * r2.denominator;
    result.numerator = r1.numerator*r2.denominator - r2.numerator*r1.denominator;
    return result;
}

Rational rationalMultiplication(Rational r1, Rational r2)
{
    //r1 * r2
    Rational result;
    result.denominator = r1.denominator * r2.denominator;
    result.numerator = r1.numerator * r2.numerator;
    return result;
}

Rational rationalDivision(Rational r1, Rational r2)
{
    //r1 / r2
    Rational result;
    result.denominator = r1.denominator * r2.numerator;
    result.numerator = r1.numerator * r2.denominator;
    return result;
}

int smallerRational(Rational r1, Rational r2)
{
    //r1 < r2 ?
    //In order to compare betwn them we need to use some " common ground" (deno
    r1.denominator = r1.denominator * r2.denominator;
    r2.denominator = r1.denominator * r2.denominator;
    r1.numerator = r1.numerator * r2.denominator;
    r2.numerator = r2.numerator * r1.denominator;
    if(r1.numerator < r2.numerator)
        return 1;
    else
        return 0;
}

int largerRational(Rational r1, Rational r2)
{
    //r1 > r2 ?
    //In order to compare betwn them we need to use some " common ground" (deno
    r1.denominator = r1.denominator * r2.denominator;
    r2.denominator = r1.denominator * r2.denominator;
    r1.numerator = r1.numerator * r2.denominator;
    r2.numerator = r2.numerator * r1.denominator;
    if(r1.numerator > r2.numerator)
        return 1;
    else
        return 0;
}

int isEqualRational(Rational r1, Rational r2)
{
    //r1 == r2 ?
    //In order to compare betwn them we need to use some " common ground" (deno
    r1.denominator = r1.denominator * r2.denominator;
    r2.denominator = r1.denominator * r2.denominator;
    r1.numerator = r1.numerator * r2.denominator;
    r2.numerator = r2.numerator * r1.denominator;
    if(r1.numerator == r2.numerator)
        return 1;
    else
        return 0;
}

int isNotEqualRational(Rational r1, Rational r2)
{
    //r1 != r2 ?
    //In order to compare betwn them we need to use some " common ground" (deno
    r1.denominator = r1.denominator * r2.denominator;
    r2.denominator = r1.denominator * r2.denominator;
    r1.numerator = r1.numerator * r2.denominator;
    r2.numerator = r2.numerator * r1.denominator;
    if(r1.numerator != r2.numerator)
        return 1;
    else
        return 0;
}

int main()
{
    return 0;
}
