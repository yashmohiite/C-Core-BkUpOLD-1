// Solutn Lec = 201

//Reffered Solutn, Lec = 201

// Functn receives some Num - "Length"
// Return --> 999...9
// Example :
// -Length = 3 --> 999
// -Length = 5 --> 99999


// num = 0
// num = num * 10 + 9 = 9
// num = num * 10 + 9 = 99
// num = num * 10 + 9 = 990 + 9 = 999

int nineNumber(int length)
{
    int i;
    int num = 0;
    for(i=0; i<length; i++)
    {
        num = num * 10 + 9;
    }
    return num;
}

int main()
{
    int lengthSeq;
    int result;
    printf("Enter Length for 9 No. to appear that many times: \n");
    scanf("%d", &lengthSeq);

    result = nineNumber(lengthSeq);

    printf("Result : %d\n", result);
    return 0;
}
