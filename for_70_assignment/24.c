#include<stdio.h>
int main()
{
  int num,inc=1,total,sum=1,y=0,a=1,i;
  printf("enter the num;");
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
    a++;
  }
  printf("%d",y);
}
