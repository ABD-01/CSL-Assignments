// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)4

#include<stdio.h>
int prime_helper(unsigned long int num);
int main()
{
    printf("\tQuestion: WAP to print n terms of Fibonacci Prime Series.\n\n");
    unsigned long int a=0,b=1,c;
    int n,count=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The Fibanacci Prime Series is : \n");
    while(count<n)
    {
        c=a+b;
        a=b;
        b=c;
        if(prime_helper(c))
        {
            printf("%lu   ",c);
            count++;
        }
    }
    return 0;
}
int prime_helper(unsigned long int num)
{
    if(num==0||num==1)
        return 0;
    for(int i=2;i<num;i++)
        if(num%i==0)
            return 0;
    return 1;
}
