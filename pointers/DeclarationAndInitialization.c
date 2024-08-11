#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *ptr,x=10; // This is declartion. it wont hold any memory space
    ptr = &x;
    printf("ptr=%p \n",ptr);
    printf("Value of &x = %p \n",&x);
    //printf("Value of *x = %p \n",*x);
    printf("Value of *ptr = %d \n",*ptr);
    printf("Value of x = %d \n",x);

}