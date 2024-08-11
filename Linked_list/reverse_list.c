//reverse the list, and return the reversed list.
struct node
{
    int data;
    struct node* next;
};

typedef struct node Node;

int main()
{


    
Node *ptr = malloc(sizeof(Node));
//check memory allocation is done properly or not
if(ptr==NULL)
{
    printf("Memory allocation failed");
    exit 1;
}

printf("Enter the data for the struct Node\n");
if (scanf("%d",&(ptr->data) != 1));
{
    printf("Input error");
    free(ptr);
    return 1;
}






}