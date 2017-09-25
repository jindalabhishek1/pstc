#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",a);
    //scanf("%x",&a);
    printf("Number is %8d",a);
    //printf("Number is %-8d.",a);
    //printf("Number is %+8d",a);
    //printf("Number is %#8x",a);
    //printf("Number is %08d",a);
    return 0;
}
