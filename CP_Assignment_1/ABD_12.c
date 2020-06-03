// Assignment-1
// Roll No. - T014
// Q)12

#include <stdio.h>

int main()
{
  int i,d,sum;
  for(i=10;i<100;i++)
  {
    d=i%10;
    sum=i/10 + d;
    if(sum%7==0)
      printf("%d\n",i);
  }
  return 0;
}
