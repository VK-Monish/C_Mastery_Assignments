#include<stdio.h>
int main()
{
  int inc=1,total=9,b,a=3;
    while(inc<=total)
    {
      b=1;
      while(b<=a)
      {
	if(inc==2&&b==2||inc==3&&b==2||inc==4&&b==2||inc==6&&b==2||inc==7&&b==2||inc==8&&b==2)
	{
	  printf(" ");
	}
	else
	{
	printf(" *");
	}
	b++;
      }
      printf("\n");
      inc++;
    }
}
