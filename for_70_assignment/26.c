#include<stdio.h>
int main()
{
  int num,y;
  scanf("%d",&num);
  for( ;num>0; )
  {
    y=num%10;
    printf("%d",y);
    num=num/10;
  }
}
