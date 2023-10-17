// Solutn Lec = 328

// Reffered Solutn, Lec = 328
#include<stdio.h>
#include<stdlib.h>

/*

*/

typedef struct point
{
    int x;
    int y;
}Point;

int main()
{
    //Creating a 'Static Array of Points'
    Point pointsArray[5];
    int i;

    //Reading I/P to the first point element in the array
    printf("Enter a first point 'x' coordinate: ");
    scanf("%d", &pointsArray[0].x);
    printf("Enter a first point 'y' coordinate: ");
    scanf("%d", &pointsArray[0].y);
    //Iterating over all of the Point Array (and reading input into each of them)
    for(i=0 ; i<5 ; i++)
    {
        printf("Enter point %d 'x': ", i+1);
        scanf("%d", &pointsArray[i].x);
        printf("Enter point %d 'y': ", i+1);
        scanf("%d", &pointsArray[i].y);
    }

    //Accessing and printing all the values of each of the 'Static Array of Points'
    for(i=0 ; i<5 ; i++)
    {
        printf("Point %d = (%d, %d)\n", i+1, pointsArray[i].x, pointsArray[i].y);
    }
    return 0;
}
