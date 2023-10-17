// Solutn Lec = 236

// Reffered Solutn, Lec = 236
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 5;
    int *p;

    printf("%d\n", a);  //5
    printf("%p\n", &a); //ADDRESS of 'a' <123456>

    p = &a;

    printf("\n\n%p\n", &a);
    printf("%p\n", p);

    printf("\n\n%d\n", a);
    printf("%d\n", *p);

    return 0;
}
