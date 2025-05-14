#include<stdio.h>
int main()
{
  int num,y,sum=0,z=1;
  printf("enter the hexadecimal num:");
  scanf("%x",&num);
  for( ;num>0; )
  {
    y=num%16;
    sum=sum+y*z;
    z=z*10;
    num=num/16;
  }
  printf("%d",sum);
}
