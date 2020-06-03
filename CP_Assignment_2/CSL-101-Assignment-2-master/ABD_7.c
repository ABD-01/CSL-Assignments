// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)7

#include<stdio.h>
unsigned int peasant(unsigned int n1,unsigned int n2);
int main()
{
    printf("\tQuestion: WAP to calculate product using Peasants' Algorithm\n\n");
    unsigned int n1,n2;
    printf("Enter two numbers: ");
    scanf("%u%u",&n1,&n2);
    printf("The product of %u and %u is %u .\n",n1,n2,peasant(n1,n2));
    return 0;
}
unsigned int peasant(unsigned int n1,unsigned int n2)
{
   unsigned int c1=n1,c2=n2,sum=0;
    while(c1>=1)
    {
        if(c1&1)
            sum+=c2;
        c1>>=1; //Right shift operator.Equivalent to c/=2
        c2<<=1; //Left shift operator.Equivalent to c*=2
    }
    return sum;
}
