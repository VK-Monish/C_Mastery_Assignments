#include<stdio.h>
int main()
{
  int num=5,inc=1,z,i,a;
  a=num;
  while(inc<=num)
  {
    z=num-a;
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
    a--;
  }
}
