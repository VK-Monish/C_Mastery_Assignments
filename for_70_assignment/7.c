#include<stdio.h>
int main()
{
  int inc=1,total=100,sum=0;
  for(  ;inc<=total;  )
  {
    if(inc%2==0)
    {
      sum=sum+inc;
    }
    inc++;
  }
  printf("%d",sum);
}
