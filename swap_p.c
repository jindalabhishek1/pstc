// Program to swap two numbers using pointers.

#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}
void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("A=%d\tB=%d\n",*x,*y);
}
