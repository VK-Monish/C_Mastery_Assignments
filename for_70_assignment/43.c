#include<stdio.h>
int main()
{
  int num,i=1,c=0,inc=1,total;
  printf("enteer the num:");
  scanf("%d",&total);
  for( ;inc<=total;inc++)
  {
    i=1;
    c=0;
    for( ;i<inc; )
    {
      if(inc%i==0)
      {
	c++;
      }
      i++;
    }
    if(c==1)
    {
      printf("%d ",inc);
    }
  }
}
