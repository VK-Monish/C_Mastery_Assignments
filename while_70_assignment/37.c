#include<stdio.h>
int main()
{
  int base,power,inc=1,sum=1;
  printf("enter the base num:");
  scanf("%d",&base);
  printf("enter the power:");
  scanf("%d",&power);
  while(inc<=power)
  {
    sum=sum*base;
    inc++;
  }
  printf("%d",sum);
}
