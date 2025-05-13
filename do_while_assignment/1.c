#include<stdio.h>
int main()
{
  int i,sum=0,z=1,y;
  scanf("%d",&i);
  do
  {
    y=i%10;
    sum=sum+y*z;
    z=z*2;
    i=i/10;
  }while(i>0);
  printf("%d",sum);
}

