// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)15

#include<stdio.h>
float power(float x, float n);
float fact (float n);
float cosine (float x, float n);
int main()
{
    printf("\tQuestion: WAP to calculate Taylor Series for Cosine.\n\n");
    float x,n;
    printf("Enter the value of x(in radian) and n: ");
    scanf("%f%f",&x,&n);
    printf("Cosine(%.2f)= %f.\n",x,cosine(x,n));
    return 0;
}
float power(float x, float n)
{
    if(n==0)
        return 1;
    return x*power(x,n-1);
}
float fact (float n)
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
float cosine (float x, float n)
{
    if(n<0)
        return 0;
     return (power(-1,n)*power(x,2*n)/fact(2*n)) + cosine(x,n-1);
}
