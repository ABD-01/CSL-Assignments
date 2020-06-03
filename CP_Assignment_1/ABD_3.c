// Assignment-1
// Roll No. - T014
// Q)3

#include <stdio.h>

int sumofdiv(int a)
{
  int sum=0;
  for(int i=1;i<=a;i++)
  {
    if(a%i==0)
        sum+=i;
  }
  return sum;
}
int main()
{
  int num1,num2;
  printf("Enter 2 nos.: ");
  scanf("%d%d",&num1,&num2);
  int sum1=sumofdiv(num1)-num1;
  int sum2=sumofdiv(num2)-num2;
  
  if(num1==sum2 && num2==sum1)
    printf("%d and %d are Amicable Numbers\n",num1,num2);
  else
    printf("%d and %d are NOT Amicable Numbers\n",num1,num2);
  return 0;
}
