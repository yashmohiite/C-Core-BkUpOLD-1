# include <stdio.h>

int main ()

{
    int num, i;

    printf ("Enter a num to print odd nos from that num onwards : \n");
    scanf ("%d", &num);

    for (i = 1 ; i <= num ; i = i + 2)
    {
        printf ("%d", i);
    }

    return 0;
}
