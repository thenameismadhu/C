//Program to add node using singly linked list
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

int main()
{
   Node *Headptr = NULL;
   Node *tmp;
    int numOfNode,i;
    printf("Please enter how many number of node you want to create\n");
    scanf("%d",&numOfNode);
    for(i=0;i<numOfNode;i++)
    {
        printf("Enter a new node\n");
        Node *CurrPtr = (Node *)malloc(sizeof(Node));
        scanf("%d",&(CurrPtr->data));
        CurrPtr->next= NULL;
        printf("Line 25\n");
        if(Headptr == NULL)
        {
            Headptr = CurrPtr;
        }
        else
        {
            tmp=Headptr;
            while(tmp->next!=NULL)
            tmp=tmp->next;
        }
        tmp->next=CurrPtr;
        printf("Node[%d] = %d\n",(i+1),tmp->data);

    }

    //print the entire list
    printf("Complete list: ");
    tmp=Headptr;
    while(tmp !=NULL)
    {
        printf("Node[%d] = %d\n",(i+1),tmp->data);
        tmp = tmp->next;
    }

   // Free the allocated memory
    tmp = Headptr;
    while (tmp != NULL) {
        Node *nextNode = tmp->next;
        free(tmp);
        tmp = nextNode;
    }

    return 0;
        
    
} 
    