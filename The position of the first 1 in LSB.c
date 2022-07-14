/*This is to find the position of the first 1 in LSB(Least significant bit)*/

#include<stdio.h>
int main()
{
  int a,b,count;
      printf("\n\nHello!\n\nEnter a number of your choice between 1 to 512\n\n");
      scanf("%d",&a);
      count=1;
      b=(a&1);
      if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
      else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
          if (b==1)printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
          else
      {
          a=a>>1;
          b=(a&1);
          count++;
      }
      }}}}}}}}}}


      /*else
      {
        a=a>>1;
        b=(a&1);
         if (b==1)
      {
          count++;
          printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
      }
      else
      {
        a=a>>1;
        b=(a&1);
         if (b==1)
      {
          count++;
          printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
      }
      else
      {
        a=a>>1;
        b=(a&1);
         if (b==1)
      {
          count++;
          printf("\n\nFirst 1 comes in the position number: %d\n\n",count);
      }
      else
      {
        /*a=a>>1;
        b=(a&1);
        printf("The given number is more than 8");
      }

      }
      }}}*/
