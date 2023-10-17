// Solutn Lec = 192

// This is WITH PARAMETERS and A RETURN VALUE

#include<stdio.h>

float findAverage(int grade1 , int grade2 , int grade3)
{
    float avg;
    avg = (grade1 + grade2 + grade3) / 3.0;
    return avg;
}

int main ()
{
    int g1, g2, g3;
    printf("Enter 3 grades : \n");
    scanf("%d%d%d", &g1, &g2, &g3);

    printf("Average = %.2f \n", findAverage(g1, g2, g3));  // Note here, almost most of the things in onw step

    return 0;
}
