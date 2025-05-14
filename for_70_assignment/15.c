#include<stdio.h>
int main()
{
  int num,y,sum=0;
  float g;
  printf("enter the num");
  scanf("%d",&num);
  for(  ;num>0; )
  {
    y=num%10;
    sum=sum+y;
    num=num/10;
  }
  printf("sum of 10 digit %d\n",sum);
  g=sum/10;
  printf("%f",g);
}
