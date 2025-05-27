#include<stdio.h>
int main()
{
  int num,y,sum=1,c,i=1,g=0;
  printf("enter the num:");
  scanf("%d",&num);
  c=num;
  while(num>0)
  {
    y=num%10;
    i=1;
    sum=1;
    while(i<=y)
    {
      sum=sum*i;
      i++;
    }
    g=g+sum;
    num=num/10;
  }
  if(c==g)
  {
    printf("it is strong number");
  }
  else
  {
    printf("it is not strong number");
  }
}

