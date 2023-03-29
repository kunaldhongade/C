#include<stdio.h>
#include<conio.h>
int sum(int,int);//prototype or declaration
int main()
{
    int x,y,result;
    printf("\n Enter value of x and y:");
    scanf("%d %d",&x,&y);
    result=sum(x,y);//calling of Function-sum
    printf("Sum of %d + %d =%d",x,y,result);
    return 0;
}
int sum(int a,int b)
{
    int res;
    res = a+b;
    return (res);
}