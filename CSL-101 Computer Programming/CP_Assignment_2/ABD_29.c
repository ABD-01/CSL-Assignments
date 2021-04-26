// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)29

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\tQuestion: WAP to interchange the diagonals of the matrix.\n\n");
    srand(time(0));
    int n,i,j,ch,temp;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("For a Matrix of order NxN, enter the value of N: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("The Matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ch==0)
                scanf("%d",&arr[i][j]);
            else{
            arr[i][j]=rand()%100;
            printf("%5d",arr[i][j]);
            }
        }
        printf("\n\n");
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i][i];
        arr[i][i]=arr[i][n-1-i];
        arr[i][n-1-i]=temp;
    }
    printf("\n\nThe matrix now is:\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%5d",arr[i][j]);
        printf("\n\n");
    }
    return 0;
}
