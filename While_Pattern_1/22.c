#include<stdio.h>
int main()
{
  int inc=1,total=5,b;
    while(inc<=total)
    {
      b=1;
      while(b<=total)
      {
	printf("*");
	b++;
      }
      printf("\n");
      inc++;
    }
}
