#include<stdio.h>
int main()
{
  int inc=1,total=5,i;
  do
  {
    i=1;
    do
    {
      printf("%d",total);
      i++;
    }while(i<=inc);
    inc++;
    total--;
    printf("\n");
  }while(total>0);
}

