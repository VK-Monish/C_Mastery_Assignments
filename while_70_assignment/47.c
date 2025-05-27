#include<stdio.h>
int main()
{
  int num,y,sum=0,c,i=1;
  printf("enter the num:");
  scanf("%d",&num);
    while(i<=num)
    {
      c=i;
      sum=0;
      while(c>0)
      {
	if(c>=1000)
	{
	y=c%10;
	sum=sum+(y*y*y*y);
	c=c/10;
	}
	if(c<=999)
	{
	  y=c%10;
	  sum=sum+(y*y*y);
	  c=c/10;
	}
      }
      if(i==sum)
      {
	printf(" %d",i);
      }
      i++;
    }
}
