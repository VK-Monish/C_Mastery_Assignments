#include<stdio.h>
int main()
{
  int inc=1,total=5,i;
  for(   ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=inc;   )
    {
      if(inc==3&&i==2||inc==4&&i==2||inc==4&&i==4)
      {
	printf(" ");
      }
      else
      {
      printf("*");
      }
      i++;
    }
    printf("\n");
  }
}
