#include<stdio.h>
int main()
{
  int total=5,i=1,e,t=1,w=total;
  int inc=1,r=4,n=3,k=1,g,p=2;
  while(k<=1)
  {
  while(total>0)
  {
    i=1;
    e=w-t;
    while(i<=e)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=total)
    {
      printf("*");
      i++;
    }
    printf("\n");
    total--;
    t++;
  }
  while(inc<=r)
  {
    i=1;
    g=r-n;
    while(i<=g)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=p)
    {
      printf("*");
      i++;
    }
    printf("\n");
    inc++;
    p++;
    n--;
  }
  k++;
  }
}
