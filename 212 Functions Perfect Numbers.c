// Solutn Lec = 212

//Reffered Solutn, Lec = 213
/*
Functn receives Int num, Return 1 if Num is a Perfect Number, Else 0.
A Perfect Num is a Num with Value equals to the sum of all of its divisors(Not including the num itself.
Ex:
6 --> 1,2,3 = 6 --> Perfect Num
12 --> 1,2,3,4,6 = 16 --> Not Perfect Num
15 --> 1,3,5 = 9 --> Not Perfect Num
28 --> 1,2,4,7,14 = 28 --> Perfect Num
*/
int sumOfDivisors(int num);
int isPerfect(int num);
int main()
{
    int result = isPerfect(6);
    return 0;
}
int sumofDivisors(int num)
{
    int i, sum = 1;
    for(i = 2; i * i < num; i++)
        if(num % i ==0)
            sum += i + (num / i);
    if(i * i == num)
        sum += i;
    return sum;
}

int isPerfect(int num)
{
    if(num <= 1)
        return 0;
    if(num == sumOfDivisors(num))
        return 1;
    return 0;
}
