#include<stdio.h>
int main()
{
  int inc=1,i=1,sum=0,j,c,total;
  printf("enter the num1:");
  scanf("%d",&total);
  while(inc<=total)
  {
    c=inc;
    sum=0;
    i=1;
    while(i<=inc)
    {
      if(inc%i==0)
      {
	sum=sum+i;
      }
      i++;
    }
    j=c*2;
    if(sum==j)
    {
      printf(" %d",inc);
    }
    inc++;
  }
}
