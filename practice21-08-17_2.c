#include<stdio.h>

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
/*
1.  float add(float a,int c)
    {
        int d;
    }
    main()
    {
        float m;
        int n;
        _=add(m,n);
        _=add(n,m);**wrong**
    }
*/
int main()
{
    int m,n,s;
    scanf("%d%d",&m,&n);
    s=add(m,n);
    printf("%d",s);
    return 0;
}
