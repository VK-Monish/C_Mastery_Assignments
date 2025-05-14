#include<stdio.h>
int main()
{
  int power,base,sum=1,i=1;
  printf("enter the basenum:");
  scanf("%d",&base);
  printf("enter the power:");
  scanf("%d",&power);
  for(i=1;i<=power; )
  {
    sum=sum*base;
    i++;
  }
  printf("%d",sum);
}
