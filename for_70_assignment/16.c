#include<stdio.h>
int main()
{
  float inc=1,total,n,h=2,i,sum=1,y,g=0,j,r=2,d=1;
  printf("enter up to num:");
  scanf("%f",&total);
  printf("enter the bottom power:");
  scanf("%f",&n);
  for(;inc<=total;)
  {
    i=i;
    sum=1;
    for(;i<=h;)
    {
      sum=sum*n;
      i++;
    }
    i=1;
    d=1;
    for(;i<=r;)
    {
      d=d*i;
      i++;
    }
    y=sum/d;
    g=g+y;
    h=h+2;
    r=r+2;
    inc++;
}
printf("%f",g-1);
}		     
