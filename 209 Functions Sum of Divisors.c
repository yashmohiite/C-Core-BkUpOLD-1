// Solutn Lec = 209

//Reffered Solutn, Lec = 210, 211
/*

Functn receives a Num, it should calculate and return its Sum of Divisors
A "Divisor" of "Num" is considered to be a number that <<< "num" % "divisor" = 0 >>>

Example:
6 --> 1,2,3,6
12 --> 1,2,3,4,6,12
15 --> 1,3,5,15
*/

int sumOfDivisor(int num);
int optimizedSumOfDivisors(int num);
int main()
{


    return 0;
}

int sumOfDivisor(int num)
{
    int i, sum = 1 + num;
    if(num == 1)
        return num;
    for(i=2; i<num; i++)
    {
        if(num % i == 0)
            sum = sum + i;
    }
    return sum;
}
//Optimised Solution, Lec 211, Very Imp :

int optimizedSumOfDivisors(int num) //Range Reduces till SqRt of Num
{
    int i, sum = 1;
    if(num == 1)
        return 1;
    for(i=2; i*i<num; i++)
    {
        if(num%i==0)
            sum = sum + i +num/i;
    }
    if(i*i==num)
        sum = sum + i;
    return sum + num;
}
