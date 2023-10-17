// Solutn Lec = 230

// Reffered Solutn, Lec = 230
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int my2DArray[2][3] = {{1,5},{2,6,10}};
    int i, j;

    for(i=0 ; i<2 ; i++)    //Go over all the Rows One by One
    {
        for(j=0 ; j<3 ; j++)    //Go over all the Columns One by One on the Row you are Currently in
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
