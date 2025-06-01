#include<stdio.h>
int main()
{
  int inc=1,total=5,z,i,a=inc,t=4,x=7,k=1,r=5;
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
    while(i<=a)
    {
      printf("*");
      i++;
    }
    printf("\n");
    inc++;
    a=a+2;
  }
  while(t>0)
  {
     i=1;
     z=r-t;
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
  k++;
  }
}
