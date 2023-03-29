#include<stdio.h>
#include<conio.h>
void area();
void main()
{
    area();
    getch();    
}
void area()
{
    float ar,rad;
    printf(" Enter the radius: ");
    scanf("%f",&rad);
    ar= 3.14*rad*rad;
    printf(" Area of circle =%f ",ar);
}