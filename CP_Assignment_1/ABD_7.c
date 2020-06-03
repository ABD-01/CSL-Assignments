// Assignment-1
// Roll No. - T014
// Q)7

#include <stdio.h>

int main()
{
  long int num,d, count=0;
  printf("Enter a number: ");
  scanf("%ld",&num);
  do{
    d=num%10;
    num=num/10;
    if(d==5)
      count++;
    else
      count=0;
  }while(count<3 && num>0);
  (count==3)? printf("YES\n") : printf("NO\n") ;
  return 0;
}
