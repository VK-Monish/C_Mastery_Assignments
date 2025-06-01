#include<stdio.h>
int main()
{
  int inc=1,total=5,i,z=total,b,h=total,k=1,c=1,d=4,f=2,j;
  while(k<=1)
  {
  while(inc<=total)
  {
    i=1;
    b=total-z;
    while(i<=b)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=h)
    {
      printf("*");
      i++;
    }
    printf("\n");
    inc++;
    h--;
    z--;
  }
  while(c<=d)
  {
    i=1;
    j=d-c;
    while(i<=j)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=f)
    {
      printf("*");
      i++;
    }
    printf("\n");
    c++;
    f++;
  }
  k++;
  }
}
