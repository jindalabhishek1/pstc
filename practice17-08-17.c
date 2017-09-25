#include<stdio.h>

void show()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is = %d.\n",c);
}

int main()
{
    show();
}
