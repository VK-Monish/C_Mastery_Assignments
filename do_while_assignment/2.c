#include<stdio.h>
int main()
{
  int i,sum=0,z=1,y;
  scanf("%d",&i);
  do
  {
    y=i%2;
    sum=sum+y*z;
    z=z*10;
    i=i/2;
  }while(i>0);
  printf("%d",sum);
}

