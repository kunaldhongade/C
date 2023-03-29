#include<stdio.h>
#include<conio.h>
int str_length()
{
    char str[100];
    int i=0;
    printf("Enter the string: ");
    gets(str);
    while (str[i]!='\0')
    {
        i++;
    }
    puts(str);
    return(i);
}
void main()
{
    int z;
    z=str_length();
    printf("The length of string is: %d.",z);
}