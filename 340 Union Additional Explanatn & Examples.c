// Solutn Lec = 339

// Referred Solutn, Lec = 339
#include<stdio.h>
#include<stdlib.h>

/*

*/

union Student
{
    int ID;
    double average;
};

int main()
{
    union Student student1;
    union Student *ptrStudent2;
    printf("Size of student1 Union = %d\n", sizeof(student1));
    printf("Size of ptrStudent2 = %d\n", sizeof(ptrStudent2));

    student1.ID = 5;
    printf("Student1.ID = %d\n", student1.ID);
    ptrStudent2 = &student1; //ptrStudent2 points to student1 var
    ptrStudent2->ID = 10;
    printf("Student1.ID = %d\n", student1.ID);
    return 0;
}

/*
typedef union Student
{
    int ID;
    double average;
}student;

int main()
{
    int i;
    student studentsArray[3]; //Array of Unions
    for(i=0 ; i<3 ; i++)
    {
        printf("Enter ID %d: ", i+1);
    }
    for(i=0 ; i<3 ; i++)
    {
        printf("Student %d ID = %d\n", i+1, studentsArray[i].ID);
    }
    return 0;
}
*/
