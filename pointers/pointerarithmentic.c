//Write a program that initializes an array, passes it to the function, and prints its elements using pointer arithmetic.


#include<stdio.h>

void printarray(int *arr,int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }

}

int main()
{
    int arr[5]={1,2,3,4,5};
    printarray(arr,5);
    return 0;
}