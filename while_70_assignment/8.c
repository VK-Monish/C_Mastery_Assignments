#include<stdio.h>
int main()
{
  int inc=1,total,sum=0;
  printf("enter the num:");
  scanf("%d",&total);
  while(inc<=total)
  {
    if(inc%2==1)
    {
      sum=sum+inc;
    }
    inc++;
  }
  printf("%d",sum);
}
