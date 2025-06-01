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
	if(a==2||a==3||a==4||a==6||a==10||a==11||a==15||a==16||a==20||a==22||a==23||a==24)
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

