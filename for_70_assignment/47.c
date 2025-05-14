#include<stdio.h>
int main()
{
  int inc=1,total,y,sum=0,c,v;
  printf("enter the num:");
  scanf("%d",&total);
  for( ;inc<=total; )
  {
    c=inc;
    v=inc;
    sum=0;
    for( ;v>0 ; )
    {
      if(c<=999)
      {
	y=v%10;
	sum=sum+(y*y*y);
	v=v/10;
      }
      else if(c>=1000)
      {
	y=v%10;
	sum=sum+(y*y*y*y);
	v=v/10;
      }
    }
    if(c==sum)
    {
      printf(" %d",c);
    }
    inc++;
  }
}
