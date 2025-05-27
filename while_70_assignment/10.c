#include<stdio.h>
int main()
{
  int y,num,sum=0,i=0;
  printf("enter the num:");
  scanf("%d",&num);
  while(num>0)
  {
    y=num%10;
    if(y>=1)
    {
      i=1;
    }
    sum=sum+i;
    num=num/10;
  }
  printf("%d\n",sum);
}
