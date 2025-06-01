#include<stdio.h>
int main()
{
  int inc=1,total=5,b,a=0i,z;
    while(inc<=total)
    {
      b=1;
      while(b<=total)
      {
	z=b+a;
	if(z>=5)
	  z=5;
	printf("%d",z);
	b++;
      }
      printf("\n");
      inc++;
      a++;
    }
}
