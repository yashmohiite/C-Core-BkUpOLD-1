// Solutn Lec = 337

// Reffered Solutn, Lec = 337

// Solutn Lec = 338

// Referred Solutn, Lec = 338

// Solutn Lec = 339

// Referred Solutn, Lec = 339
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
What is a Union?
-User-Defined Datatype
-A collection of elements (or variables) that are kind of being held in the region in the memory
*/

//How to define a Union ?

/*
union <union name>
{
    datatype1 field1;
    datatype2 field2;
    ....
};
*/
//Ex:
union minmax
{
    int min;
    int max;
    double average;
};

union info
{
    char firstName[20];
    int age;
};

struct point_struct
{
    int x;
    int y;
};

union point_union
{
    int x;
    int y;
};

int main()
{
    //Template
    //union <union_name> <variable_name>;
    union info myVariable1;
    myVariable1.age = 30;
    printf("myVariable1.age = %d\n", myVariable1.age);
    strcpy(myVariable1.firstName, "Hello!");
    printf("myVariable.firstName = %s\n", myVariable1.firstName);
    printf("myVariable.age = %d\n", myVariable1.age); //Note O/P IMP

    printf("\n\n");

    struct point_struct point1;
    union point_union point2;

    point1.x = 5;
    point1.y = 7;
    printf("Struct Point = (%d, %d) \n", point1.x, point1.y);
    point1.y = 10;
    printf("After Change-->Struct Point=(%d, %d)\n", point1.x, point1.y);

    point2.x = 3;
    printf("Union Point = (%d, %d)\n", point2.x, point2.y);
    point2.y = 4;
    printf("After Change-->Union Point=(%d, %d)\n", point2.x, point2.y);
    return 0;
}
