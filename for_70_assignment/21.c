#include<stdio.h>
int main()
{
  int inc=1,total,a=inc,y=10,sum=0;
  printf("enter the num :");
  scanf("%d",&total);
  for( ;inc<=total;inc++)
  {
    sum=sum+a;
    a=a+y;
    y=y*10;
  }
  printf("%d",sum);
}
