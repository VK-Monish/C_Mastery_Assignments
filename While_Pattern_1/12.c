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
	if(a==1||a==2||a==3||a==4||a==5)
	{
	  printf("1");
	}
	  else if(a==6||a==7||a==8||a==9||a==10)
	  {
	    printf("2");
	  }
	else if(a==11||a==12||a==13||a==14||a==15)
	{
	  printf("3");
	}
	else if(a==16||a==17||a==18||a==19||a==20)
	{
	  printf("4");
	}
	else if(a==21||a==22||a==23||a==24||a==25)
	{
	  printf("5");
	}
	
	a++;
      }
      printf("\n");
      inc++;
      b=b+5;
    }
}

