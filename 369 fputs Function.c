// Solutn Lec = 369

// Referred Solutn, Lec = 369
#include<stdio.h>
#include<stdlib.h>

/*
fputs(<string>, <pointer_to_a_file>)
*/



int main()
{
    FILE* fp;

    puts("Hey Man");
    puts("This is ABC from XYZ");

    fp = fopen("", "w");

    if(fp != NULL)
    {
        //fputs() does not print on new line automatically, we need to specify \n
        fputs("Hey Man\n", fp);
        fputs("This is ABC from XYZ\n");
        fclose(fp);
    }
    return 0;
}
