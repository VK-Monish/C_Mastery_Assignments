#include<stdio.h>
int main()
{
  int inc=1,total=5,i;
  for(   ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=inc;   )
    {
      printf("*");
      i++;
    }
    printf("\n");
  }
}
