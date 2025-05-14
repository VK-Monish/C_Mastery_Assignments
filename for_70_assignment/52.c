#include<stdio.h>
int main()
{
  int a=0,b=1,c,inc=1,total;
  printf("enter the num:");
  scanf("%d",&total);
  for(inc=1;inc<=total;inc++)
  {
    printf(" %d",a);
    c=a+b;
    a=b;
    b=c;
  }
}
