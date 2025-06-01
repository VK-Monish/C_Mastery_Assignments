#include<stdio.h>
int main()
{
  int inc=1,total=5,b,a=0,y=1;
    while(inc<=total)
    {
      b=1;
      while(b<=total)
      {
	printf("%d",a);
	b++;
	a=y-a;
      }
      printf("\n");
      inc++;  
    }
}
