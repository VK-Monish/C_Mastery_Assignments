#include<stdio.h>
int main()
{
  int inc=1,total=5,i,z=total,b,a=total,h=total,k=1,c=1,d=5,f=1,j=1,t=0,n=4;
  for( ;k<=1; )
  {
  for( ;inc<=total;  )
  {
    i=1;
    for(  ;i<=h;  )
    {
      printf("*");
      i++;
    }
    i=1;
    for(  ;i<=t;   )
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
    t++;
  }
  for( ;c<=d; )
  {
    i=1;
    for( ;i<=f; )
    {
      printf("*");
      i++;
    }
    i=1;
    for(  ;i<=n;   )
    {
      printf(" ");
      i++;
    }
    i=1;
    for(  ;i<=f;  )
    {
      printf("*");
      i++;
    }
    printf("\n");
    c++;
    f++;
    n--;
  }
  k++;
  }
}
