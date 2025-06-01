#include<stdio.h>
int main()
{
  int inc=1,total=5,b,a=0,z=0;
    while(inc<=total)
    {
      b=1;
      while(b<=total)
      {
	z=b+a;
	if(z==6)
	  z=1;
	if(z==7)
	  z=2;
	if(z==8)
	  z=3;
	if(z==9)
	  z=4;
	printf("%d",z);
	b++;
      }
      printf("\n");
      inc++;
      a++;
    }
}
