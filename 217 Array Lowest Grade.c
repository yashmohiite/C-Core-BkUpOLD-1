// Solutn Lec = 217

//Reffered Solutn, Lec = 217
#include<stdio.h>
int main()
{
    int grades[5];
    int i;
    int lowest_grade;

    for(i=0 ; i<5 ; i++)
    {
        printf("Enter Grade no %d\n", i+1);
        scanf("%d", &grades[i]);
    }
    lowest_grade = grades[0];   //A Must Step

    for(i=1 ; i<5 ; i++)
    {
        if(grades[i] < lowest_grade)
            lowest_grade = grades[i];
    }
    printf("Your lowest grades is : %d\n", lowest_grade);


    printf("Printing Array Elements:\n");
    for(i=0 ; i<5 ; i++)
    {
        printf("grades[%d] = %d\n", i, grades[i]);
    }

    printf("Printing Array Elements in Reverse:\n");
    for(i=4 ; i>=0 ; i--)
    {
        printf("grades[%d] = %d\n", i, grades[i]);
    }
    return 0;
}
