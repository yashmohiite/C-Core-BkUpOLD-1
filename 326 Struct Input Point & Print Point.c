// Solutn Lec = 326

// Reffered Solutn, Lec = 327
#include<stdio.h>
#include<stdlib.h>

/*
Funct 1: Gets a point variable & prints its information
Funct 2: responsible for getting a point input from the user and then return it
*/

typedef struct point
{
    int x;
    int y;
}Point;

void printPoint(Point p1)
{
    printf("Point x = %d\n", p1.x);
    printf("Point y = %d\n", p1.y);
}

Point inputPoint()
{
    Point myPoint;
    printf("Enter X Coordinate: ");
    scanf("%d", &myPoint.x);
    printf("Enter Y Coordinate: ");
    scanf("%d", &myPoint.y);
    return myPoint;
}

int main()
{
    Point p1 = inputPoint();
    printf("P1 before Changes: \n");
    printPoint(p1);
    p1.x += 1;
    p1.y += 3;
    printf("P1 after Changes: \n");
    printPoint(p1);
    return 0;
}
