#include<stdio.h>
int main()
{
  int num,sum=1,y;
  printf("enter the num:");
  scanf("%d",&num);
  for( ;num>0;num--)
  {
    sum=sum*num;
  }
  printf("%d",sum);
}
