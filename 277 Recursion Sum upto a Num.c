// Solutn Lec = 277

// Reffered Solutn, Lec = 278
#include<stdio.h>
#include<stdlib.h>
//Receieves a Natural Num, Returns Sum from 1 to Num
//Sum = 1 + 2 + 3 + ... + (num - 1) + num OR num + (num-1) + ... + 3 + 2 + 1

// 1 + 2 + 3 +...+ num <--> 1 + 2 + 3 + ... + num-1 + num
// Above Big Solutn broken to <--> Smaller Solutions
int sumUpTo(int num)
{
    if(num == 1) // Final Case in The End
        return 1;
    return num + sumUpTo(num-1);
}
// How it Works
// num = 3 --> 3 + 3
// num = 2 --> 2 + 1
// num = 1 --> 1
int main()
{
    int num;
    int result;
    printf("Insert your Number: ");
    scanf("%d", &num);
    result = sumUpTo(num);
    printf("Result = %d\n", result);
    return 0;
}
