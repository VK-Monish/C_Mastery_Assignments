#include<stdio.h>
int main()
{
  int table=5,sum=0,inc=1,total=5;
  scanf("%d",&total);
  for( ;inc<=total; )
  {
    sum=sum+table;
    printf("%d\n",sum);
    inc++;
  }
}
