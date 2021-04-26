// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)20

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Reverse(int m,int n,int arr[m][n]);
int main()
{
    printf("\tQuestion: WAP to place elements at odd indices before even indices.\n\n");
    srand(time(0));
    int arr[50],n,i,ch,temp;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("The Array:\n");
    if(!ch)
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
    else
        for(i=0;i<n;i++)
            printf("%d  ",arr[i]=rand()%100);
    for(i=1;i<=n/2;i++)
    {
        temp=arr[i];
        for(int j=i;j<n-1;j++)
            arr[j]=arr[j+1];
        arr[n-1]=temp;
    }
    printf("\nThe output Array:\n");
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
    return 0;
}
