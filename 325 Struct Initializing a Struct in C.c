// Solutn Lec = 325

// Reffered Solutn, Lec = 325
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
    //Declaring a "Point" variable (without initialization)
    Point p1; //Initialized x & y with Garbage Values

    //Initializing a "Point" variable (members in order)
    Point p2 = {5,7}; //x=5, y=7

    //Using Designated Initializer
    Point p3 = {.x = 3, .y = 4}; //x=3, y=4

    //Using Designated Initializer (out of order)
    Point p4 = {.y = 10, .x = 2}; //x=2, y=10

    //Designated Initializer (other members are initialized with 0)
    Point p5 = {.x = 1}; //x=1, y=0
    return 0;
}
