#include<stdio.h>
#include<conio.h>
int send()
{
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);
    return(no);
}
void main()
{
    int z;
    z=send();
    printf("you entered: %d.",z);
    getch();
}