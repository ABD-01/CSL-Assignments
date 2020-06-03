// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)2

#include<stdio.h>
unsigned long long int fact_helper(int num);
unsigned long long  int sums(int n,int k);
int main()
{
    printf("\tQuestion: WAP to find sum of nC0+nC1+nC2+..+nCk.\n\t(Don't use math.h library)\n\n");
    int n,k;
    unsigned long long int sumofseries;
    printf("(Warning: Enter value of n such that n<=20, because\n20!=2,432,902,008,176,640,000\nand we can't handle data greater that this)\n");
    printf("Enter the value of n and k : ");
    scanf("%d%d",&n,&k);
    sumofseries=sums(n,k);
    printf("\nThe Sum of the series is: %llu .\n",sumofseries);
    return 0;
}
unsigned long long int fact_helper(int num)
{
    if(!num)
        return 1;
    unsigned long long int fact=1;
    for(int i=1;i<=num;i++)
        fact*=i;
    return fact;
}
 unsigned long long int sums(int n,int k)
{
    unsigned long long int sum=0;
    for(int i=0;i<=k;i++)
        sum=sum+((fact_helper(n)/fact_helper(n-i))/(fact_helper(i)));
    return sum;
}
