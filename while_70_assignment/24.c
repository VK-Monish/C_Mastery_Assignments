#include<stdio.h>
int main()
{
  int inc=1,total,n,h=1,i,sum=1,y,g=0,j;
  printf("enter up to num:");
  scanf("%d",&total);
  printf("enter the bottom power:");
  scanf("%d",&n);
  while(inc<=total)
  {
    i=1;
    sum=1;
    while(i<=h)
    {
      sum=sum*n;
      i++;
    }
    y=sum;
    g=g+y;
    h++;
    inc++;
  }
  printf("%d",g+1);
}
