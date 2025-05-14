#include<stdio.h>
int main()
{
  int num,inc=1,total,sum=1,y=0,a=3,i;
  printf("enter the base;");
  scanf("%d",&num);
  printf("enter the total");
  scanf("%d",&total);
  for( ;inc<=total;inc++)
  {
    i=1;
    sum=1;
    for(;i<=a;i++)
    {
      sum=sum*num;
    }
    y=sum+y;
    a=a+2;
  }
  printf("%d",y-1);
}
