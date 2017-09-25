// Program to calculate the area of a triangle.

#include<stdio.h>
void read(int *, int *);
void area(int *, int *);
int main()
{
    int base,height;
    printf("Enter base and height:");
    read(&base,&height);
    area(&base,&height);
    return 0;
}

void read(int *a, int *b)
{
    scanf("%d %d",a,b);
}

void area(int *a, int *b)
{
    int area=*a**b/2;
    printf("area is %d.\n",area);
}
