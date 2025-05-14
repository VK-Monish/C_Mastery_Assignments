#include<stdio.h>
int main()
{
  int num,y,a=0;
  printf("enter the num:");
  scanf("%d",&num);
  for( ;num>0; )
  {
    y=num%10;
    if(y)
    {
      a++;
    }
    num=num/10;
  }
  printf("%d",a);
}
