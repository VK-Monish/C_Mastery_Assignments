#include<stdio.h>
int main()
{
  int total=5,i=1,e,t=total,w=total,u=total;
  int inc=1,r=5,n=3,k=1,g,p=1;
  while(k<=1)
  {
  while(total>0)
  {
    i=1;
    while(i<=total)
    {
      printf("*");
      i++;
    }
    i=1;
    e=u-t;
    while(i<=e)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=w)
    {
      printf("*");
      i++;
    }
    printf("\n");
    total--;
    w--;
    t--;
  }
  while(inc<=r)
  {
    i=1;
    n=r-inc;
    while(i<=n)
    {
      printf(" ");
    }
    while(i<=p)
    {
      printf("*");
      i++;
    }
    printf("\n");
    inc++;
    p++;
  }
  k++;
  }
}
