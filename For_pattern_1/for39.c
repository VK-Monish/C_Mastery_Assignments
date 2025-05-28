#include<stdio.h>
int main()
{
  int inc=1,total=5,i,z=total,b,h=total,k=1,c=1,d=4,f=2,j;
  for( ;k<=1; )
  {
  for( ;inc<=total;  )
  {
    i=1;
    b=total-z;
    for(  ;i<=b;  )
    {
      printf(" ");
      i++;
    }
    i=1;
    for(  ;i<=h;  )
    {
      printf("*");
      i++;
    }
    printf("\n");
    inc++;
    h--;
    z--;
  }
  for( ;c<=d; )
  {
    i=1;
    j=d-c;
    for( ;i<=j; )
    {
      printf(" ");
      i++;
    }
    i=1;
    for( ;i<=f; )
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
