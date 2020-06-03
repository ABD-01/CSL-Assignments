// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)12

#include<stdio.h>
int Check_Prime(int num);
int main()
{
    printf("\tQuestion: Write a recursive function that returns\n\tthe status (as 0 or 1) after checking the primarily of a number.\n\n");
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("The Function Check_Prime(%d) returned value %d .\n",num,Check_Prime(num));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int Check_Prime(int num)
{
    static int i=2;
    if(num==0 || num==1) return 0;
    if(i==num) return 1;
    if(num%i==0)
        return 0;
    i++;
    return Check_Prime(num);
}
