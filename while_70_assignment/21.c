#include<stdio.h>
int main()
{
  int inc=1,total,i=1,z=1,sum=0;
  printf("enter the num up to:");
  scanf("%d",&total);
  while(inc<=total)
  {
    sum=sum+z;
    z=z*10;
    z=z+1;
    inc++;
  }
  printf("%d",sum);
}
