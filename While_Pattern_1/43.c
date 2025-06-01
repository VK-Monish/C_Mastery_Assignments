#include<stdio.h>
int main()
{
  int x=1,y=3,z=13,i,a,t=19,k=1;
  int q=1,e=10,v=t,d=t,c;
  while(k<=2)
  {
    while(x<=y)
    {
    a=y-x;
    i=1;
    while(i<=a)
    {
      printf(" ");
      i++;
    }
    i=1;
    while(i<=z)
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
    while(q<=e)
    {
      c=v-t;
      i=1;
      while(i<=c)
      {
	printf(" ");
	i++;
      }
      i=1;
      while(i<=d)
      {
	if(d==19&&i==6)
	  printf("I");
	else if(d==19&&i==7)
	  printf("L");
	else if(q==1&&i==8)
	  printf("O");
	else if(q==1&&i==9)
	  printf("V");
	else if(q==1&&i==10)
	  printf("E");
	else if(q==1&&i==11)
	  printf("L");
	else if(q==1&&i==12)
	  printf("I");
	else if(q==1&&i==13)
	  printf("N");
	else if(q==1&&i==14)
	  printf("U");
	else if(q==1&&i==15)
	  printf("X");
	else 
	{
	printf("*");
	}
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
