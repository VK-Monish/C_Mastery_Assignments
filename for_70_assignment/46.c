#include<stdio.h>
int main()
{
  int inc=1,total,y,sum=0,c;
  printf("enter the num:");
  scanf("%d",&total);
  c=total;
  for( ;total>0; )
  {
    if(c<=999)
    {
    y=total%10;
    sum=sum+(y*y*y);
    total=total/10;
    }

    else if(c>=1000)
    {
      y=total%10;
      sum=sum+(y*y*y*y);
      total=total/10;
    }
  }
  if(c==sum)
  {
  printf("it is amstrong num");
  }
  else
  {
    printf("it is not amstrong num");
  }
}
