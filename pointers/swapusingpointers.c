#include<stdio.h>
int main()
{
    int x=10,y=20,tmp;
    int *a=&x,*b=&y;
   
    tmp = *a;
    *a=*b;
    *b=tmp;

    printf("a=%d  b=%d\n",*a,*b);

}