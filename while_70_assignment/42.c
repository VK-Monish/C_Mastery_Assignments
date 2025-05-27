#include<stdio.h>
int main()
{
  int n,x=0,i=1;
  printf("enter the num:");
  scanf("%d",&n);
  while(i<n)
  {
    if(n%i==0)
    {
      x++;
    }
    i++;
  }
  if(x==1)
    printf(" the prime number:");
  else
    printf("it is not prime num");
}
