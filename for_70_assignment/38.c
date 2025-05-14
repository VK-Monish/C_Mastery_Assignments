#include<stdio.h>
int main()
{
  int num,i;
  printf("enter the num");
  scanf("%d",&num);
  for(i=1;i<=num; )
  {
    if(num%i==0)
    {
      printf("%d\n",i);
    }
    i++;
  }
}
