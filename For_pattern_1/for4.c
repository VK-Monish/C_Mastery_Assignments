#include<stdio.h>
int main()
{
  int inc,total=5,i;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=total;i++)
    {
      if(inc==3&&i==3)
      {
      printf("0");
      }
      else
      {
	printf("1");
      }
    }
    printf("\n");
  }
}

