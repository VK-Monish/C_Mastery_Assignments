#include<stdio.h>
int main()
{
  int total=5,i=1,e=total;
  while(total>0)
  {
    i=1;
    while(e==5)
    {
      printf(" ");
      e++;
    }
    while(i<=total)
    {
      printf("*");
      i++;
    }
    printf("\n");
    total--;
  }
}
