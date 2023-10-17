#include<stdio.h>
#include<stdlib.h>

//represent final result in ' HH : MM : SS ', position of zeroes imp

int main ()

{
    int totsec, hrs, min, remsec;

    printf("Enter Total Seconds \n");
    scanf("%d", &totsec);

    hrs = totsec / 3600;
    min = (totsec - hrs * 3600) / 60;
    remsec = (totsec - hrs * 3600) % 60;

    if (hrs < 10)
        printf("0");
    printf("%d : ", hrs);                       //note here, this could work with or without writing else                 //Check the sample solutn again
    if (min < 10)
        printf("0");
    printf("%d : ", min);
    if (remsec < 10)
        printf("0");
    printf("%d \n", remsec);

    return 0;
}
