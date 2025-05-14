#include<stdio.h>
int main()
{
  int num,y,j;
  printf("enter the num");
  scanf("%d",&num);
  y=num%10;
  for( ;num>10; )
  {
    num=num/10;
  }
  j=num+y;
  printf("sum of first and last digit %d",j);
}
