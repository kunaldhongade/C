#include<stdio.h>
#include<conio.h>
void average(int a1,int b1,int c1);
void main()
{
    int a,b,c;
    printf("Enter a value for a: ");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%d",&b);
    printf("Enter a value for c: ");
    scanf("%d",&c);
    average(a,b,c);
    getch();
}
void average(int a1,int b1,int c1)
{
    int avg;
    avg=(a1+b1+c1)/3;
    printf("average is = %d",avg);
}