#include<stdio.h>
int main()
{
  int x=1,y=3,z=13,i,a,t=19,k=1;
  int q=1,e=10,v=t,d=t,c;
  for( ;k<=2; )
  {
    for(;x<=y;)
    {
    a=y-x;
    i=1;
    for(;i<=a;)
    {
      printf(" ");
      i++;
    }
    i=1;
    for(;i<=z;)
    {
      if(x==1&&i==6||x==1&&i==7||x==1&&i==8||x==2&&i==8||x==2&&i==9||x==3&&i==10)
      {
	printf(" ");
      }
      else
      {
      printf("*");
      }
      i++;
    }
    printf("\n");
    x++;
    z=z+3;
    }
    for(;q<=e;)
    {
      c=v-t;
      i=1;
      for(;i<=c;)
      {
	printf(" ");
	i++;
      }
      i=1;
      for(;i<=d;)
      {
	printf("*");
	i++;
      }
      printf("\n");
      q++;
      d=d-2;
      t--;
    }
    k++;
  }
}
