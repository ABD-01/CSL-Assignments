// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)5

#include<stdio.h>
int checkPerfect(int num);
int main()
{
    printf("\tQuestion: WAP to check whether given no. is perfect or not.\n");
    printf("\tA number is said to be perfect if\n\tit is the sum of all its factors (except itself).\n\n");
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    (checkPerfect(num))?printf("The function returned 1, hence %d is Perfect No.\n",num):printf("The function returned 0, hence %d is NOT a Perfect No.\n",num);
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int checkPerfect(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
        if(num%i==0)
            sum+=i;
    if(sum==num)
        return 1;
    else
        return 0;
}
