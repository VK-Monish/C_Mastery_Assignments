#include<stdio.h>
int main()
{
  int inc=1,total,a=3,i,sum=1;
  printf("enter the num");
  scanf("%d",&total);
  for(  ;inc<=total;inc++)
  {
    i=1;
    sum=1;
    for( ;i<=a;i++)
    {
      sum=sum*inc;
    }
    printf("%d\n",sum);
  }
}
