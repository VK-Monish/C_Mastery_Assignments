#include<stdio.h>
int main()
{
  int inc=1,total=5,z,i,a=inc;
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
}
