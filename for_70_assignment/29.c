#include<stdio.h>
int main()
{
  int num,sum=0,y;
  printf("enter the num");
  scanf("%d",&num);
  for( ;num>0; )
  {
    y=num%10;
    sum=y+sum*10;
    num=num/10;
  }

  for( ;sum>0; )
  {
    y=sum%10;
    if(y==1)
    {
      printf("one");
    }
    else if(y==2)
    {
      printf("two");
    }
    else if(y==3)
    {
      printf("three");
    }
    else if(y==4)
    {
      printf("four");
    }
    else if(y==5)
    {
      printf("five");
    }
    else if(y==6)
    {
      printf("six");
    }
    else if(y==7)
    {
      printf("seven");
    }
    else if(y==8)
    {
      printf("eight");
    }
    else if(y==9)
    {
      printf("nine");
    }
    else if(y==0)
    {
      printf("zero");
    }
    sum=sum/10;
  }
}

