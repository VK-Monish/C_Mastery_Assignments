#include<stdio.h>
int main()
{
  int inc=1,total=20,table,sum=0;
  printf("enter the table:");
  scanf("%d",&table);
  while(inc<=total)
  {
    sum=sum+table;
    printf("%d\n",sum);
    inc++;
  }
}
