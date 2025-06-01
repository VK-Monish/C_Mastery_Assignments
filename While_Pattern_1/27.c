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
    while(inc==1&&i<=num)
    {
      printf("*");
      i++;
    }
    while(inc==5&&i<=num)
    {
      printf("*");
      i++;
    }
    while(i<=num)
    {
      if(i==2||i==4||i==5)
      {
	printf(" ");
      }
      else
	printf("*");
      i++;
    }
    printf("\n");
    inc++;
  }
}
