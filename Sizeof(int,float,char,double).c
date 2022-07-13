#include<stdio.h>
int main()
{
 int a,b,c,d,e;
 char ch;
 float f;
 double db;
 b=sizeof(a);
 c=sizeof(f);
 d=sizeof(ch);
 e=sizeof(db);
 printf("\n\nHello!\n\nThe size of an int is: %d\n\nThe size of a float is: %d\n\nThe size of a char is: %d\n\nThe size of a double is: %d\n\n",b,c,d,e);
 return 0;
}

