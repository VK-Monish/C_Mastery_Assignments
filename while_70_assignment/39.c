#include<stdio.h>
int main()
{
  int inc=1,total,sum=1;
  printf("enter the num:");
  scanf("%d",&total);
  while(inc<=total)
  {
    sum=sum*inc;
    inc++;
  }
  printf("%d",sum);
}
