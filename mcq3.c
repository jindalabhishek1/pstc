#include<stdio.h>
int main()
{
    int j=0;
    if(1||(j=1))
        printf("%d",j);
    else
        printf("j= %d",j);
    return 0;
}
