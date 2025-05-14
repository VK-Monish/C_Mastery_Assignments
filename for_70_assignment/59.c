#include<stdio.h>
int main()
{
  int num,y,sum=0,z=1;
  printf("enter the octal num:");
  scanf("%o",&num);
  for( ;num>0; )
  {
    y=num%10;
    sum=sum+y*z;
    z=z*10;
    num=num/10;
  }
  printf("%d",sum);
}
