#include<stdio.h>
int main()
{
  int num,i=1,c=0;
  printf("enteer the num:");
  scanf("%d",&num);
  for( ;i<num; )
  {
    if(num%i==0)
    {
      c++;
    }
    i++;
  } 
  if(c==0)
  {
    printf("it is prime num:");
  }
  else
  {
    printf("it is not prime");
  }
}
