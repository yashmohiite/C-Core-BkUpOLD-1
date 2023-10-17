// Solutn Lec = 343

// Referred Solutn, Lec = 343
#include<stdio.h>
#include<stdlib.h>

/*
1. "default" usage of constants in C Language:
    const age = 35;   //Assumes as:  const int age = 35;
2. A pointer to a constant!  Value we are pointing to Can't Be Changed,
   Pointer itself Can Be Changed
   const int *ptr;
3. Constant pointer to "int" variable. Value we are pointing to
   Can Be Changed. Pointer itself Can't Be Changed
   int *const ptr;
4. Constant pointer pointing to constant integer. Neither the Pointer
   nor the Value can be changed. Both Are Constants!
   const int *const ptr;

   REASONS TO USE CONSTANTS:

1. Performance!
2. Defense! (Accidental Change Prevented)
3. Code Readability
*/



int main()
{
    int *const ptr = &age1;
    //Creating constant pointer that points to variable "age"

    *ptr = 30;
    //modify the value of "age1" where we point to, and not the actual pointer

    ptr = &age2;
    //That's an attempt to change the pointer itself. Compilation Error

    return 0;
}
