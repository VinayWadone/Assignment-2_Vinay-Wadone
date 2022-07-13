#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n\nHello!\n\nPlease enter a three digit number of your choice\n\n");
    scanf("%d",&a);
    b=a%10;
    c=(a/10);
    d=b*100;
    e=c+d;
    printf("\n\nSo the transformed number is: %d\n\n",e);
    return 0;
}
