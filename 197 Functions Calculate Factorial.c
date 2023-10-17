// Solutn Lec = 197

//Reffered Solutn, Lec = 198

int factorial(int num)
{
    int i;
    int result = 1;
    if(num<0)
        return -1;
    for(i=1; i<=num; i++)
        result = result * i;
    return result;
}

int main()
{
    int myNum;
    printf("Enter a Num:\n");
    scanf("%d", &myNum);
    printf("Factorial %d ! = %d \n", myNum, factorial(myNum));
    return 0;
}
