#include<stdio.h>
int main()
{
  int inc=1,total=5,i;
  do
  {
    i=1;
    do
    {
      printf("%d",i);
      i++;
    }while(i<=inc);
    inc++;
    printf("\n");
  }while(inc<=total);
}

