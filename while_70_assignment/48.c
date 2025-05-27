#include<stdio.h>
int main()
{
  int num1,i=1,sum=0,j;
  printf("enter the num1:");
  scanf("%d",&num1);
  while(i<=num1)
  {
    if(num1%i==0)
    {
      sum=sum+i;
    }
    i++;
  }
  j=num1*2;
  if(j==sum)
  {
    printf("it is perfect num");
  }
  else
  {
    printf("it is not perfect num");
  }
}
