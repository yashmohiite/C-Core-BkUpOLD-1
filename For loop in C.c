#include <stdio.h>

int main ()

{
    int num, i;

    printf("Hello, enter a num : \n");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)  //Note semicolons in these Sections, no simple comma. (Initialization (this runs just once at the start);Loop Conditn;Update Section(after every iteration))
    {
        printf("%d", i);        //Note here num will not be printed in place of %d, 'i' should be selected and printed as it is incrementing in this example
    }

    return 0;
}
