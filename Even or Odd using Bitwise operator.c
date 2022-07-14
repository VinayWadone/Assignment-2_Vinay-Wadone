#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n\nHello!\n\nPlease enter a number of your choice\n\n");
    scanf("%d",&a);
    b=a&1;  //"&" operation of any number with 1 will always give 0 or 1, 0 for even number & 1 for an odd number for more details you can watch the support session of 14th July 2022
    printf(b==1?"\n\nYou entered an ODD number\n\n":"\n\nYou entered an EVEN number\n\n");
    return 0;
}
