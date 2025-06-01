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
	if(a==1||a==5||a==7||a==9||a==13||a==17||a==19||a==21||a==25)
	{
	  printf("1");
	}
	  else
	  {
	    printf("0");
	  }
	a++;
      }
      printf("\n");
      inc++;
      b=b+5;
    }
}

