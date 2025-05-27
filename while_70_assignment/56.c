#include<stdio.h>
int main()
{
  int total,y,sum=0,z=1;;
  printf("enter the binary num:");
  scanf("%d",&total);
  while(total>0)
  {
    y=total%10;
    sum=sum+(y*z);
    z=z*2;
    total=total/10;
  }
  printf("%o",sum);
}
