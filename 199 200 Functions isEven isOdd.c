// Solutn Lec = 199, 200

//Reffered Solutn, Lec = 199, 200

// Functn will receive an int, Return "1" if this given Num is "Even",
// Otherwise, this funct should return "0". "Odd" --> "0"

int isEven(int num)
{
    if(num % 2 == 0)    //Even Number
        return 1;
    return 0;
}

// isOdd
// functn will receive an int, return "1" if Odd, else "0" for Even

int isOdd(int num)
{
    if(num % 2 != 0)    //Odd Number
        return 1;
    return 0;
}

// 2nd Method for isOdd :
int isOdd2(int num)
{
    if (isEven(num) == 1)
        return 0;
    return 1;
}

int main()
{
    return 0;
}
