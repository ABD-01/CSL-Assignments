// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)13

#include<stdio.h>
int search(int num,int dig);
int main()
{
    printf("\tQuestion: WAP to count the occurrences of the digit d in the number n.\n\n");
    int num,dig;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the Digit: ");
    scanf("%d",&dig);
    printf("The digit %d has occurred %d times.\n",dig,search(num,dig));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int search(int num,int dig)
{
    if(num==0)
        return 0;
    else if(num%10==dig)
        return 1+search(num/10,dig);
   return search(num/10,dig);
}
