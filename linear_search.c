// Program of linear search.

#include<stdio.h>
int main()
{
    int arr[10]={12,12,11,14,15,4,1,18,68,100},i,key,flag=0;
    printf("Enter the element:");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Match found at %d location.\n",i+1);
    else
        printf("NO MATCH\n");
    return 0;
}
