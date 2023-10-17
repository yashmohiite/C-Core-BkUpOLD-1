// Solutn Lec = 389, 390

// Referred Solutn, Lec = 389
#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>
/*
Receive a Linked-List & some 'int' No
Go through all the nodes of the list
Return 'true' if this No exists in the list
Otherwise if it doesn't exist return 'false'
*/

typedef struct node
{
    int data;
    struct node *next;
}Node;

bool isNumberInList(Node *head, int num)
{
    Node *cur_node = head;
    while(cur_node->next!=NULL)
    {
        if(cur_node->data == num)
        {
            return true;
        }
        cur_node = cur_node->next;
    }
    return false;
}

/*
Receives a Linked List & some 'int' No.
Return the No. of occurrences of this 'int No. in the list
*/

int totalNumberAppearancesInList(Node *head, int num)
{
    int count = 0;
    Node *temp = head;

    while(temp->next!=NULL)
    {
        if(temp->data == num)
        {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main()
{
    return 0;
}
