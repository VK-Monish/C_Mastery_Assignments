#include<stdio.h>
int main()
{
  int num,y,sum=0,i=1,g=0,c;
  scanf("enter the num %d",&num);
  c=num;
  for( ;num>0; )
  {
    y=num%10;
    sum=1;
    for(i=1;i<=y;i++)
    {
      sum=sum*i;
    }
    g=g+sum;
    num=num/10;
  }
  if(g==c)
  {
    printf("it is  strong num");
  }
  else
  {
    printf("it is not strong num:");
  }
}
