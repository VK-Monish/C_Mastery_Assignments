#include<stdio.h>
int main()
{
  int num,y,sum=0,c;
  printf("enter the num:");
  scanf("%d",&num);
  c=num;
  do
  {
    y=num%10;
    num=num/10;
    sum=sum+(y*y*y);
  }while(num>0);
  if(sum==c)
  {
    printf("its amstrong num");
  }
  else
  {
    printf("its not amstrong num");
  }
}
