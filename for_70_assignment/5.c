#include<stdio.h>
int main()
{
  int inc=1,total=100;
  for(  ;inc<=total;  )
  {
    if(inc%2==1)
    {
      printf(" %d",inc);
    }
    inc++;
  }
}
