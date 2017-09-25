// Program to print closest power of 2 of a number.

#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,n;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>=0)
    {
        for(i=0;i<32;i++)
        {
            if((num>>i&1)==1)
            {
                n=i;
            }
        }
        for(i=0;i<n;i++)
        {
            if((num&(1<<i))!=0)
            {
                num=num^(1<<i);
            }
        }
    }
    else
    {
        for(i=31;i>=0;i--)
        {
            if((num>>i&1)==1)
            {
                n=i;
            }
            else
            {
                break;
            }
        }
        for(i=0;i<(n-1);i++)
        {
            if((num&(1<<i))!=0)
            {
                num=num^(1<<i);
            }
        }
    }
    printf("%d",num);
    return 0;
}
