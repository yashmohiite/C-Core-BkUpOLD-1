// Solutn Lec = 386, 387

// Referred Solutn, Lec = 386
#include<stdio.h>
#include<stdlib.h>
/*
Receive Nos on I/P from User
Every received No should be added to the end of List
The Stopping Conditn would be when No is -1
Return the New List
*/

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *createListOfNumber()
{
    Node *head;
    Node *cur_node;

    int num;

    printf("Please enter a No or '-1' to finish\n");
    scanf("%d", &num);

    if(num == -1)
        return NULL;
    head = (Node*)malloc(sizeof(Node));
    cur_node = head;
    cur_node->data = num;

    printf("Please enter a No or '-1' to finish\n");
    scanf("%d", &num);

    while(num != -1)
    {
        cur_node->next = (Node*)malloc(sizeof(Node));
        cur_node = cur_node->next;
        cur_node->data = num;
        printf("Pleas enter a No or '-1' to finish\n");
        scanf("%d", &num);
    }
    cur_node->next = NULL;
    return head; //Address of 1st Node in this list
}

//Lec 387:
int countNodesInList(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp->next!=NULL) // As long not reached the end of list
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    return 0;
}
