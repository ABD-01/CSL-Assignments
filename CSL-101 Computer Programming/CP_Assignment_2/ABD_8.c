// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)8

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int check_jumping(int x);
int main()
{
    printf("\tQuestion: WAP to check whether given no. is Jumping Number or not.\n");
    printf("\tA number is called jumping number if\n\tall adjacent digits in it differ by 1.\n\n");
    int num;
    while(1){
    printf("Enter a number (Enter '0' to exit): ");
    scanf("%d",&num);
    if(!num) break;
    if(check_jumping(num))
        printf("%d is a Jumping number\n\n",num);
    else
        printf("%d is not a Jumping number\n\n",num);
    }
    return 0;
}
int check_jumping(int x)
{
    int N=floor(log10((double)x) + 1);
    int dig[N],num=x,i;
    if(N==1)
        return 1;
    for(i=N-1;i>=0;i--)
    {
        dig[i]=num%10;
        num/=10;
    }
    for(i=0;i<N-1;i++)
        if(abs(dig[i]-dig[i+1])!=1)
            return 0;
    return 1;
}
