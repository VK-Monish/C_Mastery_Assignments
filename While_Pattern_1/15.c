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
	if(a==1||a==2||a==3||a==4||a==5||a==6||a==11||a==16||a==21)
	{
	  printf("5");
	}
	  else if(a==7||a==8||a==9||a==10||a==12||a==17||a==22)
	  {
	    printf("4");
	  }
	else if(a==13||a==14||a==15||a==18||a==23)
	{
	  printf("3");
	}
	else if(a==19||a==20||a==24)
	{
	  printf("2");
	}
	else if(a==25)
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

