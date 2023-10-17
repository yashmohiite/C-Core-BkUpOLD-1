#include<stdio.h>
#include<stdlib.h>
int main()
{
    //casting, and 2 basic rules

    int num1=5; double num2=2; //any one no. if float, whole operation considered in float

    double result;

    result=num1/num2; //can insert here double in paranthesis before any num(before the variable), to get result in float

    printf("result = %lf\n\n\n",result);



    //get 3 int grades from user, print exact average with points

    int g1, g2; double g3; //here we can change any 1 type so all can be done in float
    double res;
    printf("enter grade1:\n");
    scanf("%d", &g1);
    printf("enter grade2:\n");
    scanf("%d", &g2);
    printf("enter grade3:\n");
    scanf("%lf", &g3); //if changed type of any num(variable), then change respective specification/place holder of that variable according to type

    res=(g1+g2+g3)/3; //or here we can add (double) to get exact points //Also we can directly do it without specifying anything just by writing denominator '3.0'

    printf("average of 3 grades=%0.1lf\n\n\n", res); //note here we can change floating point decimal numbers appeared


    return 0;
}
