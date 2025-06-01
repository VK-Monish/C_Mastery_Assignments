#include<stdio.h>
int main()
{
  int inc=1,total=5,b,a=0;
    while(inc<=total)
    {
      b=1;
      while(b<=total)
      {
	printf("%d",b+a);
	b++;
      }
      printf("\n");
      inc++;
      a++;
    }
}
