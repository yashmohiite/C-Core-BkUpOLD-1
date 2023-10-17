// Solutn Lec = 363

// Referred Solutn, Lec = 363
#include<stdio.h>
#include<stdlib.h>

/*

*/



int main()
{
    //Step 1 - Creating a Pointer that points to a FILE type
    FILE* fp;
    //Step 2 - Opening/Access to a File
    //fp = fopen(<file_name>, <type_of_operation>);

    //Types of operation:
    // -'w' - Writing
    // -'r' - Reading
    // -'a' - Appending
    fp = fopen(); //TODO - Complete

    //Step 3 - Make sure the opening was successful
    //if(fp != NULL) - to make sure that the open operation was successful

    //Step 4 - Work with the File (Reading / Writing / etc)
    //Code for working with the file

    //Step 5 - Close the File
    fclose(fp);
    return 0;
}
