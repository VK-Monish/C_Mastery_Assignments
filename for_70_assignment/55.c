#include<stdio.h>
int main()
{
  int num,y,sum=0,z=1;
  printf("enter the binary num:");
  scanf("%d",&num);
  for( ;num>0; )
  {
    y=num%10;
    sum=sum+y*z;
    z=z*2;
    num=num/10;
  }
  printf("%d",sum);
}
