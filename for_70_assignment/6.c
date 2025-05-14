#include<stdio.h>
int main()
{
  int inc=1,total=5,sum=0;
  for( ;inc<=total;  ) 
  {
    sum=sum+inc;
    inc++;
  }
  printf("%d",sum);
}
