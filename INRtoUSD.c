#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("\n\nHello!\n\nPlease enter a amount you have in INR\n\n");
    scanf("%f",&a);
    b=a/76.23;
    printf("\n\nSo considering 1USD = 76.23INR, the USD you can have is: %0.2f\n\n",b);
    return 0;
}
