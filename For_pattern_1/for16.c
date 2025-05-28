#include<stdio.h>
int main()
{
  int inc,total=5,i=1,a=0,j=0,b,g;
  g=total;
  for(inc=1;inc<=total;inc++)
  {
    i=1;
    for(  ;i<=g;i++)
    {
      printf("%d",i+a);
    }
    if(inc>=2)
    {
      i=1;
      b=0;
      for(  ;i<=j;  )
      {
	printf("%d",j-b);
	i++;
	b++;
      }
    }
    printf("\n");
    a++;
    j++;
    g--;
  }
}

