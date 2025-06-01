#include<stdio.h>
int main()
{
  int inc=1,t=5,z,i,a=t,x=9;
  while(t>0)
  {
    i=1;
    z=a-t;
    while(i<=z)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=x)
    {
      printf("*");
      i++;
    }
    printf("\n");
    t--;
    x=x-2;
  }
}
