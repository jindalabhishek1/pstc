// Program to add two numbers using pointers.

#include<stdio.h>
void add(int *, int *);
int main()
{
    int a,b;
    printf("Enter Two numbers:");
    scanf("%d %d",&a,&b);
    add(&a,&b);
    return 0;
}

void add(int *x, int *y)
{
    int sum;
    sum=*x+*y;
    printf("Sum = %d\n",sum);
}
