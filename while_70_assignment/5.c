#include<stdio.h>
int main()
{
  int inc=1,total=100;
  while(inc<=total)
  {
    if(inc%2==1)
    {
      printf(" %d",inc);
    }
    inc++;
  }
}
