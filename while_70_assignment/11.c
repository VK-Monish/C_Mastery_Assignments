#include<stdio.h>
int main()
{
  int y,num;
  printf("enter the num:");
  scanf("%d",&num);
  printf("last digit %d\n",num%10);
  while(num>10)
  {
    num=num/10;
  }
  printf("first digit %d",num);
}
