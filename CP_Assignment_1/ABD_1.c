// Assignment-1
// Roll No. - T014
// Q)1

#include <stdio.h>
int main()
{
	int num1,num2,i,big,small,gcd,lcm;
	printf("Enter two Numbers: ");
	scanf("%d%d",&num1,&num2);
	big=(num1>=num2)? num1 : num2;
	small=(num1>=num2)? num2 : num1;
	for(i=small;i>0;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
			break;
		}
	}
	for(i=big;i<=num1*num2;i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			lcm=i;
			break;
		}
	}
	printf("GCD is %d. \nLCM is %d\n",gcd,lcm);
}
