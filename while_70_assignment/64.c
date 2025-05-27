#include<stdio.h>
int main()
{
  int total,y,sum=0,z=1;;
  printf("enter the hexadecimal num:");
  scanf("%x",&total);
  while(total>0)
  {
    y=total%2;
    sum=sum+(y*z);
    z=z*10;
    total=total/2;
  }
  printf("%d",sum);
}
