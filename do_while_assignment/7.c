#include<stdio.h>
int main()
{
  int fact=1,n;
  printf("enter the num:");
  scanf("%d",&n);
  do
  {
    fact=fact*n;
    n--;
  }while(n>0);
  printf("%d",fact);
}

