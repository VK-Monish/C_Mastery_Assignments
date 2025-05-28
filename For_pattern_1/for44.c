#include<stdio.h>
int main()
{
  int inc=1,total=5,i,f=total,a=inc,d=7,k=1;
  for(   ;k<=1;   )
  {
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
  inc=1,total=5,i,f=4,a=2;
  for(  ;inc<=total;inc++)
  {
    i=1;
    for(   ;i<=a;  )
    {
      printf(" ");
      i++;
    }
    i=1;
    for(  ;i<=d;  )
    {
      printf("*");
      i++;
    }
    printf("\n");
    d=d-2;
    a++;
  }
  k++;
  }
}
