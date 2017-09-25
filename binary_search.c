// Program of binary search.

#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i,start,mid=0,end,key,flag=0;
    printf("Enter the element:");
    scanf("%d",&key);
    start=0;
    end=10;
    while(mid!=key)
    {
        mid=start+end/2;
        if(mid==key)
        {
            flag=1;
            break;
        }
        else
        {
            if(key>mid)
                start=mid+1;
            else
                end=mid-1;
        }
    }
    if(flag==1)
        printf("Match found\n");
    else
        printf("NO Match");
    return 0;
}
