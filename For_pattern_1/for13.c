#include<stdio.h>
int main()
{
  int inc,total=5,i=1,a=total;
  for(inc=1;inc<=total;inc++)
  {
    for(  ;i<=a;i++)
    {
      printf(" %d",i);
    }
    printf("\n");
    a=a+5;
  }
}
