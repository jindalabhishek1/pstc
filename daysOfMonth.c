// Program to tell no. of says left in a month.

#include<stdio.h>
int main()
{
    int i,month,day,daysleft,*ptr;
    int months[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter Month:");
    scanf("%d",&month);
    printf("Enter Day:");
    scanf("%d",&day);
    for(i=0;i<12;i++)
    {
        if(month==months[i])
            break;
        else
            continue;
    }
    ptr=&days[i];
    daysleft=*ptr-day;
    printf("Days left = %d.",daysleft);
    return 0;
}
