#include<stdio.h>
int main()
{
  int inc=1,total=5,a=total,i;
  for(  ;total>0;total--) 
  {
    i=1;
    for(   ;i<=inc;   )
    {
      printf(" ");
      i++;
    }
    i=1;
    for(   ;i<=a;   )
    {
      if(a==4&&i==2||a==4&&i==3||a==3&&i==2)
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
    a--;
    inc++;
  } 
}
