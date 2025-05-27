#include<stdio.h>
int main()
{
  int y,num,sum=0;
  printf("enter the num:");
  scanf("%d",&num);
  y=num%10;
  while(num>10)
  {
    num=num/10;
  }
  sum=y+num;
  printf("sum of first digit and last digit %d",sum);
}
