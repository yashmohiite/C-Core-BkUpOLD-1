// Solutn Lec = 332

// Reffered Solutn, Lec = 332
#include<stdio.h>
#include<stdlib.h>

/*

*/
typedef struct point
{
    int x;
    int y;
}Point;

Point addition(Point p1, Point p2)
{
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

void increment(Point *p) //"++"
{
    (*p).x++;
    (*p).y++;
}

int main()
{
    /*int num = 5;
    num++;
    num += 3;*/
    Point point1 = {1,2}, point2 = {4,1};
    //point1++;
    // increment(&point1);
    //point1 = point2 + 3;
    // Point point3 = addition(point1, point2);
    return 0;
}
