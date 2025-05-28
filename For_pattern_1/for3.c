#include<stdio.h>
int main()
{
  int inc,total=5,i;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=total;i++)
    {
      if(i==2||i==4)
      {
      printf("1");
      }
      else
      {
	printf("0");
      }
    }
    printf("\n");
  }
}

