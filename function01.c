#include<stdio.h>
#include<conio.h>
void getDoublevalue(int f)
{
    f = f*2;
    printf("f(formal parameter)=%d\n",f);
    printf("  function\n");
}
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    getDoublevalue(a);
    printf("a(actual parameter)=%d\n",a);
    printf("Main");
    return 0;
}
//`````kunal dhongade`````