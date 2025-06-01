#include<stdio.h>
int main()
{
  int num=5,inc=1,z,i;
  while(inc<=num)
  {
    z=num-inc;
    i=1;
    while(i<=z)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=num)
    {
      printf("*");
      i++;
    }
    printf("\n");
    inc++;
  }
}
