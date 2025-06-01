#include<stdio.h>
int main()
{
  int inc=1 ,total=5,a,b;
    a=inc;
    b=total;
    while(inc<=total)
    {
      while(a<=b)
      {
	if(a==13)
	{
	  printf("0");
	}
	  else
	  {
	    printf("1");
	  }
	a++;
      }
      printf("\n");
      inc++;
      b=b+5;
    }
}

