#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\n\nHello!\n\nPlease enter a number of your choice\n\n");
    scanf("%d",&a);
    printf("\n\nnow,enter a digit of your choice to append\n\n");
    scanf("%d",&c);
    b=a*10;
    a=b+c;
    printf("\n\nSo the transformed number is: %d\n\n",a);
    return 0;
}
