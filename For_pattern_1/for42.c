#include<stdio.h>
int main()
{
  int inc=1,total=5,i,o=4,k=1;
  for(  ;k<=1;  )
  {
  for(  ;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=inc; )
    {
      printf("*");
      i++;
    }
    printf("\n");
  }
  for(   ;o>0;  )
  {
    i=1;
    for(  ;i<=o;i++)
    {
      printf("*");
    }
    printf("\n");
    o--;
  }
  k++;
  }
}

