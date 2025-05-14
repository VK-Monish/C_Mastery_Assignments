#include<stdio.h>
int main()
{
  int num,y,sum=0,z=1;
  printf("enter the decimal num:");
  scanf("%d",&num);
  for( ;num>0; )
  {
    y=num%8;
    sum=sum+y*z;
    z=z*10;
    num=num/8;
  }
  printf("%d",sum);
}
