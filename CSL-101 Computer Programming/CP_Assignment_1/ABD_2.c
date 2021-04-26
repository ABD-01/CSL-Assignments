// Assignment-1
// Roll No. - T014
// Q)2

#include <stdio.h>

int main()
{
  long int n,sum=0,one=1;
  printf("Enter the value of n: ");
  scanf("%ld",&n);
  for(int i=0;i<n;i++)
  {
    sum=sum+one;
    one=one*10+1;
  }
  printf("The sum is %ld.\n",sum);
  return 0;
}
