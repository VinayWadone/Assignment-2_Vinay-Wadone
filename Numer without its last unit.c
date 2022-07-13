#include<stdio.h>
int main()
{

    int a,b;
    printf("\n\nHello!\n\nPLease enter a number of your choice\n\n");
    scanf("%d",&a);
    b=a/10;
    printf("\n\nSo the number without the last digit is: %d\n\n",b);
    return 0;
}
