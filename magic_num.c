// Program to check weather a number is magic number or not.

#include<stdio.h>
void read(int *);
void sumDigit(int *, int *);
void reverse(int *, int *);
void product(int *, int *, int *);
void check(int *, int *);
int main()
{
    int num,sum=0,rev=0,pro;
    printf("Enter a number:");
    read(&num);
    sumDigit(&num,&sum);
    reverse(&sum,&rev);
    product(&sum,&rev,&pro);
    check(&num,&pro);
}

void read(int *num)
{
    scanf("%d",num);
}

void sumDigit(int *num, int *sum)
{
    int temp,r;
    temp=*num;
    while(temp!=0)
    {
        r=temp%10;
        *sum=*sum+r;
        temp=temp/10;
    }
}

void reverse(int *sum, int *rev)
{
    int r,temp;
    temp=*sum;
    while(temp!=0)
    {
        r=temp%10;
        *rev=*rev*10+r;
        temp=temp/10;
    }
}
void product( int *sum, int *rev, int *pro)
{
    *pro=*sum**rev;
}

void check(int *num, int *pro)
{
    if(*num==*pro)
        printf("\n%d is magic number.\n",*pro);
    else
        printf("\nNot magic number.\n");
}
