#include<stdio.h>
#include<stdlib.h>

int main()

// convert seconds to hours, remaining minutes, remaining seconds, EX: (01 : 06 : 40)

{
    int totalsec, hrs, min, rem_sec;

    printf("Enter seconds : \n");
    scanf("%d", &totalsec);

    hrs = totalsec / 3600;

    min = (totalsec - hrs * 3600) / 60;

    rem_sec = (totalsec - hrs * 3600) % 60;

    printf("Hours : %d, Minutes : %d, Seconds : %d\n\n\n", hrs, min, rem_sec);

    return 0;
}
