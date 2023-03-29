#include<stdio.h>
#include<conio.h>
void funct(int a1,int b1);
void main()
{
    int a,b;
    printf(" Enter a value for a: ");
    scanf("%d",&a);
    printf(" Enter a value for b: ");
    scanf("%d",&b);
    funct(a,b);
}
void funct(int a1,int b1)
{
    int c;
    c= a1+b1;
    printf(" Result =%d",c);
}