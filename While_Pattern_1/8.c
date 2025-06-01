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
	if(a==3||a==8||a==11||a==12||a==13||a==14||a==15||a==18||a==23)
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

