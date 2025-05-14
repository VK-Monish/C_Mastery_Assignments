#include<stdio.h>
int main()
{
  int inc=1,total=15,a=0,b=0,c=0,d=0;
  for( ;inc<=total; )
  {
    scanf("%d",&a);
    if(a<=5&&a>=1)
    {
      b++;
    }
    if(a<=17&&a>=6)
    {
      c++;
    }
    if(a<=28&&a>=18)
    {
      d++;
    }
    inc++;
  }
  printf("total baby age %d\n",b);
  printf("total school boy age %d\n",c);
  printf("total adult age %d\n",d);
}

