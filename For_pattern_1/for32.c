#include<stdio.h>
int main()
{
  int inc=1,total=5,a=total,i;
  for(  ;total>0;total--) 
  {
    i=1;
    for(   ;i<=a;   )
    {
      printf("*");
      i++;
    }
    printf("\n");
    a--;
  } 
}
