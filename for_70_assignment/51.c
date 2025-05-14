#include<stdio.h>
int main()
{
  int inc=1,total,y,sum=0,i=1,g=0,c,v;
  printf("enter the num:");
  scanf("%d",&total);
  for( ;inc<=total;inc++)
  {
    v=inc;
    c=inc;
    g=0;
    for( ;v>0; )
    {
      y=v%10;
      sum=1;
      for(i=1;i<=y;i++)
      {
	sum=sum*i;
      }
      g=g+sum;
      v=v/10;
    }
    if(g==inc)
    {
      printf(" %d",inc);
    }
  }
}
