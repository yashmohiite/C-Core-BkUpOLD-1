// Solutn Lec = 243

// Reffered Solutn, Lec = 243
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

# define SIZE 5

int main()
{
    int i, flag = 1;
    int arr[SIZE] = {1,3,2,3, 1};

    for(i=0 ; i<SIZE/2 ; i++)
    {
        if(arr[i] != arr[SIZE-1-i]) //The element from left does not equal to element on the right
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("The Array is a Pallindrome\n");
    else if(flag==0)
        printf("The Array is Not a Pallindrome\n");

    return 0;
}
