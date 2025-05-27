#include<stdio.h>
int main()
{
  int num,y,sum=0,c;
  printf("enter the num:");
  scanf("%d",&num);
  c=num;
  while(num>0)
  {
    y=num%10;
    sum=sum+(y*y*y);
    num=num/10;
  }
  if(c==sum)
  {
    printf("its amstromng num");
  }
  else
  {
    printf("it is not amstrong num");
  }
}
