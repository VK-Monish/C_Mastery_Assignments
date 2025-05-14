#include<stdio.h>
int main()
{
  int inc=1,i=1,sum=0,j,c,total,num;
  printf("enter the num1:");
  scanf("%d",&num);
  c=num;
  for(;i<=num;i++)
  {
    if(num%i==0)
      {
	sum=sum+i;
      }
  }
    j=c*2;
    if(sum==j)
    {
      printf("it is perfect num:");
    }
    else
    {
      printf("it is not perfect num:");
    }
} 
