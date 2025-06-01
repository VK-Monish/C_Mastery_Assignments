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
      if(inc==2&&i==2||inc==3&&i==2||inc==3&&i==3||inc==3&&i==5||inc==4&&i==2||inc==4&&i==3||inc==4&&i==4||inc==4&&i==6||inc==4&&i==7)
      {
	printf(" ");
      }
      else
      {
      printf("*");
      }
      i++;
    }
    printf("\n");
    inc++;
    a=a+2;
  }
}
