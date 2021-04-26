// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)30(b)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Reverse(int m,int n,int arr[m][n]);
int main()
{
    printf("\tQuestion: WAP to reverse the order of the elements in an M*N array.\n");
    printf("\t=>This is a Recursive Solution.\n\n");
    srand(time(0));
    int m,n,i,j,ch;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("For a Matrix of order MxN, enter the value of M and N: ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("The Matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(!ch)
                scanf("%d",&arr[i][j]);
            else{
            arr[i][j]=rand()%100;
            printf("%5d",arr[i][j]);
            }
        }
        printf("\n\n");
    }
    Reverse(m,n,arr);
    return 0;
}
void Reverse(int m,int n,int arr[m][n])
{
    static int i,j;
    if((m&1 && i==m/2 && j==n/2)||(i==((m%2)?m/2+1:m/2)))
    {
        printf("\n\nThe matrix now is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%5d",arr[i][j]);
            printf("\n\n");
        }
    }
    else if(j<n)
    {
        arr[i][j]=arr[i][j]+arr[m-1-i][n-1-j];
        arr[m-1-i][n-1-j]=arr[i][j]-arr[m-1-i][n-1-j];
        arr[i][j]=arr[i][j]-arr[m-1-i][n-1-j];
        j++;
        Reverse(m,n,arr);
    }
    else if(j==n)
    {
        j=0;
        i++;
        Reverse(m,n,arr);
    }
}
