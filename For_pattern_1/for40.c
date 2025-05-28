#include<stdio.h>
int main()
{
  int inc=1,total=5,i,z=total,b,a=total,h=total,k=1,c=1,d=4,f=2,j=1;
  for( ;k<=1; )
  {
  for( ;inc<=total;  )
  {
    i=1;
    b=a;
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
    a--;
  }
  for( ;c<=d; )
  {
    i=1;
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
    j++;
  }
  k++;
  }
}
