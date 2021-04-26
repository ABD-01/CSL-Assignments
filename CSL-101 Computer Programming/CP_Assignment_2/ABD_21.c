// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)21

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\tQuestion: WAP to count the number of Even-spaced Inversions in the Array.\n\n");
    srand(time(0));
    int n,arr[100],i,ch,count=0;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%d",&ch);
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("The Array: \n");
    for(i=0;i<n;i++)
    {
        if(!ch)
            scanf("%d",&arr[i]);
        else{
        arr[i]=rand()%20;
        printf("%d  ",arr[i]);
        }
    }
    for(i=0;i<n;i++)
        for(int j=n-1;j>i;j--)
            if(arr[i]>arr[j] && (arr[i]-arr[j])%2==0)
                count++;
    printf("\nThe number of even-spaced inversions in the array are %d.\n",count);
    return 0;
}
