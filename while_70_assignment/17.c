#include<stdio.h>
int main()
{
  int total,inc=1,sum=1;
  printf("upto how many number:");
  scanf("%d",&total);
  while(inc<=total)
  {
    sum=1;
    sum=sum*(inc*inc*inc);
    printf("%d\n",sum);
    inc++;
  }
}
