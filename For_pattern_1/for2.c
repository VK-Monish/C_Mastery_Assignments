#include<stdio.h>
int main()
{
  int inc,total=5,i;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(;i<=total;i++)
    {
      if(inc==1||inc==3||inc==5)
      {
      printf("!");
      }
      else
      {
	printf("0");
      }
    }
    printf("\n");
  }
}

