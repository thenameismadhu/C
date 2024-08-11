#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node Node;

Node* addatbegin(Node* head,Node *newnode)
{
    newnode->next=head;
    head=newnode;
    return head;
}
void* printnode(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        printf("%d -> ",tmp->data);
        tmp=tmp->next;
    }
    printf("NULL\n");
}

void freenode(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        Node* nextnode=tmp->next;
        free(tmp);
        tmp=nextnode;
    }
}
int main()
{
   Node* head=NULL;
    int numOfNode,i;
    printf("Please enter how many number of node you want to create\n");
    scanf("%d",&numOfNode);
    
    for(i=0;i<numOfNode;i++)
    {
       // Node* head=NULL;
        Node *newnode =(Node*)malloc(sizeof(Node));
        printf("ENter new node data\n");
        scanf("%d",&(newnode->data));
        newnode->next=NULL;
        head = addatbegin(head,newnode);
        
    }
    printnode(head);
    freenode(head);
}