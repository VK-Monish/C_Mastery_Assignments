#include<stdio.h>
int main()
{
  int inc=65,total=90,k=1;
  printf("upper case character");
  while(k<=1)
  {
    while(inc<=total)
    {
      printf(" %c",inc);
      inc++;
    }
    printf("\n");
    inc=97,total=122;
    printf("lower case character");
    while(inc<=total)
    {
      printf(" %c",inc);
      inc++;
    }
    k++;
  }
}
