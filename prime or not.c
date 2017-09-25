//Program to tell a number is prime or not.

#include<stdio.h>
int main()
{
    int num,i,count;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            count=1;
            break;
        }
        else
            count=0;
    }
    if(count==1)
        printf("Not Prime\n");
    else
        printf("Prime\n");
    return 0;
}
