#include<stdio.h>
int main()
{
  float inc=1,total,sum=0,i=1,y=0;
  printf("ener the num");
  scanf("%f",&total);
  for( ;inc<=total;inc++ )
  {
    sum=0;
    for( ;i<=inc;i++) 
    {
      sum=sum+i;
    }
    y=y+1/sum;
  }
  printf("%f",y);
}
