// Program to input and print array elements.

#include<stdio.h>
int main()
{
    int N,roll[N],marks[N],i;
    printf("Enter the number of students:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("Enter roll number:");
        scanf("%d",&roll[i]);
        scanf("%d",&marks[i]);
    }
    printf("\nRoll No:\t Marks:\n");
    for(i=0;i<N;i++)
    {
        printf("%d \t %d\n",roll[i],marks[i]);
    }
    return 0;
}
