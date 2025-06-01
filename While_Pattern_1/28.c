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
    while(inc==1&&i<=num||inc==5&&i<=num)
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
    a--;
  }
}
