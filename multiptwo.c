#include<stdio.h>
#include<conio.h>
void mult();
void main()
{
    mult();
}
void mult()
{
    int res,a,b;
    printf(" Enter two numbers: ");
    scanf("%d %d",&a,&b);
    res=a*b;
    printf(" The result is = %d",res);
}
