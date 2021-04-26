// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)11

#include<stdio.h>
#include<math.h>
int reverse(int x);
int main()
{
    printf("\tQuestion: Write a recursive function print Reverse of a no.\n\n");
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The reverse of given no. is %d.\n",reverse(num));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int reverse(int x)
{
    if(x==0)
        return 0;
    int dig=log10(x);
    return (x%10)*pow(10,dig) +reverse(x/10);
}
