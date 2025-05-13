#include<stdio.h>
int main()
{
  int inc=1,total=5,i;
  do
  {
    i=1;
    do
    {
      if(i==1)
      {
	printf("A ");
      }
      if(i==2)
      {
	printf("b ");
      }
      if(i==3)
      {
	printf("c ");
      }
      if(i==4)
      {
	printf("d ");
      }
      if(i==5)
      {
	printf("e ");
      }
      i++;
    }while(i<=inc);
    inc++;
    printf("\n");
  }while(inc<=total);
}

