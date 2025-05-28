#include<stdio.h>
int main()
{
  int inc=1,total=5,i,o=4,k=1,h=1,a,s=3;
  for(  ;k<=1;  )
  {
    printf(" *");
    printf("\n");
  for(  ;inc<=total;inc++)
  {
    printf("*");
    i=1;
    for(  ;i<=inc; )
    {
      printf("%d",i);
      i++;
    }
    if(inc>=2)
    {
      i=1;
      a=0;
      for( ;i<=h;  )
      {
	printf("%d",h-a);
	i++;
	a++;
      }
      h++;
    }
    printf("*");
    printf("\n");
  }
  for(   ;o>0;  )
  {
    printf("*");
    i=1;
    for(  ;i<=o;i++)
    {
      printf("%d",i);
    }
    if(o>1)
    {
      i=1;
      a=0;
      for(  ;i<=s;i++)
      {
	printf("%d",s-a);
	a++;
      }
      s--;
    }
    printf("*");
    printf("\n");
    o--;
  }
  k++;
  printf(" *");
  }
}

