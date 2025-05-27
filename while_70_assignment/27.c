#include<stdio.h>
int main()
{
  int num,y,sum=0,k=1,f,c;
  printf("enter the num:");
  scanf("%d",&num);
  c=num;
  while(num>0)
  {
    y=num%10;
    sum=y+(sum*10);
    num=num/10;
  }
  if(c==sum)
  {
    printf("the given number is palindrome");
  }
  else
  {
    printf("the given number is not palindrome");
  }
}

