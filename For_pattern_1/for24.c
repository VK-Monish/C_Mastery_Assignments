#include<stdio.h>
int main()
{
  int inc=1,total=5,i,a=total-1;
  for(  ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=a;  )
    {
      printf(" ");
      i++;
    }
    i=1;
    for(  ;i<=total;i++)
    {
      printf("*");
    }
    printf("\n");
    a--;
  }
}
