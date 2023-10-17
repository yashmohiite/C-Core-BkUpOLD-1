#include<stdio.h>
#include<stdlib.h>

//distance = km, speed = km/h, time = h

int main()

{
    int speed, distance, hours;

    speed = 80;                            //H
    distance = 300;                        //Km/H

    hours = distance / speed;               //H

    //for remaining distance and part of it in minutes, so total time

    float speedInMinutes = speed / 60.0;    //km/h                    //Note declaratn and assignments /operations all in one step, etc.

    float remainingMinutes = (distance % speed) / speedInMinutes;         //Min

    printf("time to reach b from a : %d hours and %.2f minutes\n\n\n", hours, remainingMinutes);

    return 0;
}
