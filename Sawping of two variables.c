#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n\nHello!\n\nEnter the first number for variable A\n");
    scanf("%d",&a);
    printf("\n\nso now enter the second number for variable B\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n\nAfter swiping, the the value in A is: %d and that of in B is: %d\n\n",a,b);
    return 0;
}
