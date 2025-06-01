#include<stdio.h>
int main()
{
  int inc=1,total=5,z,i,o=1,n=4,g=5,k,f;
  while(k<=1)
  {
  while(inc<=total)
  {
    i=1;
    z=total-inc;
    while(i<=z)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=inc)
    {
      printf(" *");
      i++;
    }
    printf("\n");
    inc++;
  }
  while(n>0)
  {
    i=1;
    f=g-n;
    while(i<=f)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=n)
    {
      printf(" *");
      i++;
    }
    printf("\n");
    n--;
  }
  k++;
  }
}
