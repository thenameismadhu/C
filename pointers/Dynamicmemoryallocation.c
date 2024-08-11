//Create a function that dynamically allocates an array of integers of a given size and initializes it with sequential numbers.
#include <stdio.h>
#include <stdlib.h>
int *dynnamicallocation(int *array,int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        array[i]=i;
    }
    return array;
}

int main()
{
    int size =5;
    int *array = (int *) malloc(size * sizeof(int));

    dynnamicallocation(array,size);
    for(int i=0;i<size;i++)
    printf("array[%d]=%d\n",i,array[i]);
    
    return 0;
    
}