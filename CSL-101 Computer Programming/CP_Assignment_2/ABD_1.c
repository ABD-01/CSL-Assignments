// Assignment-2
// Q)1

#include<stdio.h>
unsigned int nCr_helper(unsigned int n,unsigned int r);
int main()
{
    printf("\tQuestion: WAP to find nCr\n\n");
    unsigned int n,r;
    printf("Enter the Value of n and r: ");
    scanf("%u%u",&n,&r);
    printf("The ans is: %u\n",nCr_helper(n,r));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
unsigned int nCr_helper(unsigned int n,unsigned int r)
{
    if(n-r==1 || r==1)
        return n;
    else if(n-r==0 || r==0)
        return 1;
    else
        return nCr_helper(n-1,r)+nCr_helper(n-1,r-1);
}
