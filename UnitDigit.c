#include<stdio.h>
int main()
{
    int num,rem;
    printf("\n\nHello!\n\nEnter a number of your choice\n\n");
    scanf("%d",&num);
    rem=num%10;
    printf("\n\nThe unit digit of your given number is %d\n\n",rem);
    return 0;
}
