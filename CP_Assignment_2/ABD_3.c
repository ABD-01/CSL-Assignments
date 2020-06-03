// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)3

#include<stdio.h>
int prime_helper(int num);
int main()
{
    printf("\tQuestion: WAP to check whether Goldbach conjecture\n\tholds for given number N.\n");
    printf("\tGoldbach conjecture states that every even number greater than 2\n\tcan be expressed as a sum of two primes.\n\n");
    printf("Enter the value of N: ");
    int N,i,j;
    scanf("%d",&N);
    if(N%2!=0 || N<=2)
        printf("ERROR!!\nN should be Even and Greater than 2");
    else{
    for(i=2;i<N;i++)
    {
        if(prime_helper(i)!=0)
        {
            j=N-i;
            if(prime_helper(j)!=0)
                break;
        }
    }
    printf("The two primes that sum upto %d are %d and %d.\n",N,i,j);
    }
    int runagain;
    printf("\nIf you want to run the Program again, press 1 or 0 to exit.\nChoice<0/1> :");
    scanf("%d",&runagain);
    if(runagain){printf("\n\n");main();}
    return 0;
}
int prime_helper(int num)
{
    if(num==0||num==1)
        return 0;
    for(int i=2;i<num;i++)
        if(num%i==0)
            return 0;
    return num;
}
