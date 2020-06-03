// Assignment-1
// Roll No. - T014
// Q)18

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int n,prod,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int list[n];
    printf("The list: ");
    for(int i=0;i<n;i++)
    {
        list[i]=rand()%20;
        printf("%d ",list[i]);
    }
    
    for(int i=0;i<n-1;i++)
    {
        prod=list[i]*list[i+1] ;
        sum+=prod;
    }
    printf("\nThe Sum : %d\n",sum);
    return 0;
}
