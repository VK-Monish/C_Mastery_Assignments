#include<stdio.h>
int main()
{
  int inc=1,total=5,b;
    while(inc<=total)
    {
      if(inc==2||inc==3||inc==4)
      {
	b=1;
	while(b<=total)
	{
	  if(b==1||b==4)
	  printf("*");
	  else
	    printf(" ");
	  b++;
	}
      }
      if(inc==1||inc==5)
      {
      b=1;
      while(b<=total)
      {
	printf("*");
	b++;
      }
      }
      printf("\n");
      inc++;
    }
}
