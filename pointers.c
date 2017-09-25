/*Points to be remembers
1. The target variable i.e. the variable to which the pointer will be pointing , should be declared first.
2. The pointer variable cannot be assigned an absolute address by user.
3. Name of a pointer cannot be same as that of ordinary variable(compiler error).
4. Any no. of pointers can points to same address.
5. It is not necessary that a pointer variable will points to the same variable throughout the program.
   It can point to any variable as long as the data type of pointer variable is same as that of variable it points to.
   */

//program to convert a floating point no. into integer using pointers.

/*
#include<stdio.h>
int main()
{
    float num,*n=&num;
    int num2,*n2=&num2;
    scanf("%f",n);
    *n2=(int)*n;
    printf("%d",*n2);
    return 0;
}
*/

// Write a program to find the biggest of three no.s using pointers.

/*
#include<stdio.h>
int main()
{
    int a,b,c,m,*num1=&a,*num2=&b,*num3=&c,*max=&m;
    scanf("%d%d%d",num1,num2,num3);
    if(*num1<*num2)
    {
        if(*num2<*num3)
            *max=*num3;
        else
            *max=*num2;
    }
    else
    {
        if(*num1<*num3)
            *max=*num3;
        else
            *max=*num1;
    }
    printf("%d",*max);
    return 0;
}
*/

//write a program to print a character also prints it ASCII value and rewrite it in uppercase is in lowercase using pointers.

#include<stdio.h>
int main()
{
    char
}
// Take a character from user and check whether it is uppercase or lowercase and if digit is entered displays error.
// Enter Character till "*" is encountered and count the no. of uppercase and lowercase character and print it in uppercase if the entered input is in lowercase and viseversa
