#include<stdio.h>
int main()
{
  int a=1,b=1,c,i=1,total;
  printf("enter the num:");
  scanf("%d",&total);
  while(i<=total)
  {
    printf(" %d", a);
    c=a+b;
    a=b;
    b=c;
    i++;
  }

}

