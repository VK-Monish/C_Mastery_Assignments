#include<stdio.h>
int main()
{
  int inc=1 ,total=11,a,b;
    a=inc;
    b=total;
    while(inc<=total)
    {
      while(a<=b)
      {
	if(a==21||a==22||a==32)
	{
	  printf(" |");
	}
	if(a==20)
	{
	  printf("--");
	}
	else
	{
	  printf(" 0");
	}
	a++;
      }
      printf("\n");
      inc++;
      b=b+11;
    }
}

