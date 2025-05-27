#include<stdio.h>
int main()
{
  int total,y,sum=0,z=1;;
  printf("enter the decimal num:");
  scanf("%d",&total);
  while(total>0)
  {
    y=total%8;
    sum=sum+(y*z);
    z=z*10;
    total=total/8;
  }
  printf("%d",sum);
}
