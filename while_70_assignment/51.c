#include<stdio.h>
int main()
{
  int inc=1,total,num,y,sum=1,c,i=1,g=0;
  printf("enter the num:");
  scanf("%d",&total);
  while(inc<=total)
  {
    c=inc;
    g=0;
    while(c>0)
    {
      y=c%10;
      i=1;
      sum=1;
      while(i<=y)
      {
	sum=sum*i;
	i++;
      }
      g=g+sum;
      c=c/10;
    }
    if(inc==g)
    {
      printf("%d\n",inc);
    }
    inc++;
  }
}

