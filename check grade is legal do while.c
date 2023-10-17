/* While :

#include<stdio.h>
#include<stdlib.h>

int main ()

{
    float grade;

    printf("Enter a grade betn 0 - 100: \n");
    scanf("%f", &grade);

    while (grade < 0 || grade > 100)
    {
        printf("Enter a grade betn 0 - 100: \n");
        scanf("%f", &grade);
    }

    printf("Thanks! You have inserted a legit grade of %.2f \n", grade);

    return 0;
}

*/


// Do While :

#include<stdio.h>
#include<stdlib.h>

int main()

{
    int grade;

    do{                                              //Note syntax / structure, semicolons, etc. for do while loop
        printf("Enter a grade betn 0 - 100: \n");
        scanf("%d", &grade);
    }while(grade < 0 || grade > 100);

    printf("Thanks! You have inserted a legit grade of %d \n", grade);

    return 0;
}
