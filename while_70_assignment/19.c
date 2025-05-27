#include<stdio.h>
int main()
{
  int inc=1,total;
  float i=1.0,sum=0.0;
  printf("enter the num:");
  scanf("%d",&total);
  while(inc<=total)
  {
    sum=sum+i/inc;
    inc++;
  }
  printf("%f",sum);
}
