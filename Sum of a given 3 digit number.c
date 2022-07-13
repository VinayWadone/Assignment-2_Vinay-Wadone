#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n\nHello!\n\nPLease enter a three digit number of your choice\n\n");
    scanf("%d",&a);
    b=a%10;
    c=(a/10)%10;
    d=a/100;
    e=b+c+d;
    printf("\n\nSo the sum of the given three digits is: %d\n\n",e);
    return 0;
}
