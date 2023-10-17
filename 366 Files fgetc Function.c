// Solutn Lec = 366, 367, 368

// Referred Solutn, Lec = 366
#include<stdio.h>
#include<stdlib.h>

/*
fgetc(<pointer_to_a_file>)
fputc(<character>, <pointer_to_a_file>)
fprintf(<pointer_to_a_file>, <placeholders>, <parameters>)
fscanf(<pointer_to_a_file>, <placeholders>, <parameters>)
*/



int main()
{
    FILE* fp; //Note FILE must be Capital
    char myChar1;

    fp = fopen("", "r");

    if(fp != NULL)
    {
        printf("The file is opened for Reading!\n");
        myChar1 = fgetc(fp);
        printf("The first char that was read is: %c\n", myChar1);
        myChar1 = fgetc(fp);
        printf("The second char that was read is: %c\n", myChar1);

        //If loops are used, we can read full File, & not just 1 by 1

        fgetc(stdin); //Equivalent or works like : getchar()
        fclose(fp);
    }







    fp = fopen("", "w");
    if(fp!= NULL)
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);
        fclose(fp);
    }
    putchar('a', stdout); //Displayed on Console //Works like: putchar('a');







    int num = 5;
    float num2 = 9.7;
    fp=fopen("", "w");
    if(fp != NULL)
    {
        fprintf(fp, %d %f, num, num2);
        fclose(fp);
    }







    fp=fopen("", "r");
    if(fp != NULL)
    {
        fprintf(fp, "%d", num);
        fscanf(fp, "%d", &num);

        fprintf(stdout, "%d", num); //To Console like normal : printf("%d", num);
        fscanf(stdin, "%d", &num); //From Console like normal : scanf("%d", &num);

        printf("Num from File = %d\n", num);
        fclose(fp);
    }
    return 0;
}
