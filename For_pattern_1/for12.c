#include<stdio.h>
int main()
{
  int inc,total=5,i=1,a=0;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=total;i++)
    {
      printf("%d",i+a);
    }
    printf("\n");
    a++;
  }
}

