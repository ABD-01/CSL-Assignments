// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)9

#include<stdio.h>

int F(int x,int y);
int main()
{
    printf("\tQuestion: WAP to compute F (x, y) where\n\t          F(x, y) = F (x-y, y) + 1 if y<= x and\n\t          F (x, y) = 0 if x < y\n\n");
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);
    printf("F(x,y)= %d \n",F(x,y));
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int F(int x,int y)
{
    if(y<=x)
        return 1+ F(x-y,y);
    return 0;
}
