#include<stdio.h>
int main()
{
  int num,y,sum=0,k=1,f;
  printf("enter the num:");
  scanf("%d",&num);
  while(k<=1)
  {
    while(num>0)
    {
      y=num%10;
      sum=y+(sum*10);
      num=num/10;
    }
    while(sum>0)
    {
      f=sum%10;
      if(f==1)
	printf(" one"); 
      else if(f==2)
	printf(" two");
      else if(f==3)
	printf(" three");
      else if(f==4)
	printf(" four");
      else if(f==5)
      printf(" five");
      else if(f==6)
	printf(" six");
      else if(f==7)
	printf(" seven");
      else if(f==8)
	printf(" eight");
      else if(f==9)
	printf(" nine");
      else if(f==0)
	printf(" zero");
      sum=sum/10;
    }
    k++;
  }
}

