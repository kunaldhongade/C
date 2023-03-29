#include<stdio.h>
#include<conio.h>
void main()
{
    int pow,num;
    long int res;
    long int power(int,int);
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter power: ");
    scanf("%d",&pow);
    res=power(num,pow);
    printf("%d to the power %d is: %ld",num,pow,res);
}
    int i=1;
    long int sum=1;
    long int power(int num,int pow)
{
    if(i<=pow)
    {
        sum=sum*num;
        power(num,pow-1);
    }
    else
        return sum;
    
}