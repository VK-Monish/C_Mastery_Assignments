#include<stdio.h>
int main()
{
  int table=5,sum=0,inc=1,total=5;
  printf("how many num:");
  scanf("%d",&total);
  printf("which table:");
  scanf("%d",&table);
  for( ;inc<=total; )
  {
    sum=sum+table;
    printf("%d\n",sum);
    inc++;
  }
}
