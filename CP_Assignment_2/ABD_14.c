// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)14

#include<stdio.h>
unsigned int Ackermann(unsigned int m, unsigned int n);
int main()
{
    printf("\tQuestion: WAP to calculate Ackerman (m,n).Ackerman function is described as:\n");
    printf("\t          A (0, n) = n + 1\n");
    printf("\t          A (m + 1, 0) = A (m, 1)\n");
    printf("\t          A (m + 1, n + 1) = A (m, A (m + 1, n))\n\n");
    unsigned int m,n;
    printf("Enter two numbers: ");
    scanf("%u%u",&m,&n);
    printf("Ackerman(%u,%u) = %u.\n",m,n,Ackermann(m,n));
    return 0;
}
unsigned int Ackermann(unsigned int m, unsigned int n)
{
    if (!m)
        return n + 1;
    if (!n)
        return Ackermann(m - 1, 1);
    return Ackermann(m - 1, Ackermann(m, n - 1));
}
