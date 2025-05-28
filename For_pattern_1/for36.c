#include<stdio.h>
int main()
{
  int inc=1,total=5,i,f=total,a=inc;
  for(  ;inc<=total;inc++) 
  {
    i=1;
    for(  ;i<=f;i++)
    {
      printf(" ");
    }
    i=1;
    for(   ;i<=a;i++)
    {
      printf("*");
    } 
    printf("\n");
    a=a+2;
    f--;
  }
}
