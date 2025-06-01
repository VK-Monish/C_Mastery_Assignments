#include<stdio.h>
int main()
{
  int inc=1,total=5,z,i;
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
      if(inc==3&&i==2||inc==4&&i==2||inc==4&&i==4)
      {
	printf(" ");
      }
      else
      {
      printf(" *");
      }
      i++;
    }
    printf("\n");
    inc++;
  }
}
