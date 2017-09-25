#include<stdio.h>

int add()
{
    int a,b,c;

    scanf("%d%d",&a,&b);
    c=a+b;
    return (c);
    /*
    syntax:
    return (expression);
    1. return (c); -- return c;
    2. return a+b; == return a; ==> return (a+b);
    3. return works as break, it shifts the control to the calling function.
       after it no statement will work.
    */
}
    int main()
    {
        int s;
        s=add();
        printf("%d",s);
        return 0;
    }

