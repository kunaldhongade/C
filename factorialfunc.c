#include<stdio.h>
#include<conio.h>
long factorial(int);
void main()
{
    int number;
    printf("Enter a number to calculate it's factorial: ");
    scanf("%d",&number);
    printf("The factorial of a number is: %d",factorial(number));
}
long factorial(int n)
{
    int i;
    long result = 1;
    for ( i = 1; i <= n; i++)
        result = result * i;
        return result;
}