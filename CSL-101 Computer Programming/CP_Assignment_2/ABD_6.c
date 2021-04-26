// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)6

#include<stdio.h>
int Palindrome_helper (int p)
{
    int x=p,r,p1=0;
    while(x>0)
    {
        r=x%10;
        p1=p1*10+r;
        x=x/10;
    }
    if(p1==p)
        return 1;
    return 0;
}
int main()
{
    printf("\tQuestion: WAP to print smallest number x such that x >= n and x is a palindrome.\n\n");
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=num;;i++)
        if(Palindrome_helper(i))
            break;
    printf("The palindromic number x such that x>=%d is %d .\n",num,i);
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
