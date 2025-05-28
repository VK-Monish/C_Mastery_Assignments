#include<stdio.h>
int main()
{
  int inc=1,total=5,a=total,i;
  for(  ;total>0;total--) 
  {
    i=1;
    for(   ;i<=a;   )
    {
      if(total==4&&i==2||total==4&&i==4||total==3&&i==2)
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
  } 
}
