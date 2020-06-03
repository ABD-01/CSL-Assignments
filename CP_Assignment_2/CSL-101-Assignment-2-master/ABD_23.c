// Assignment-2
// Mohammed Abdullah
// Roll No. - T014
// Q)23

#include<stdio.h>

int Count(int arr[],int n,int right,int left);
int main()
{
    int arr[50],n,i,r,l;
    printf("\tQuestion: WAP to count no. of integers b/w Left and right term.\n\n");
    printf("Enter the number of Elements: ");
    scanf("%d",&n);
    printf("Enter the (sorted)Array: \n");
    for(i=0;i<n;i++)
    {
        printf("Array[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Right Integer: ");
    scanf("%d",&r);
    printf("Enter the Left Integer: ");
    scanf("%d",&l);
    printf("The number of integers between left and right (inclusive) are %d .\n",Count(arr,n,r,l));
    return 0;
}
int Count(int arr[],int n,int right,int left)
{
    static int count=0,i;
    if(!count){
        for(i=0;i<n;++i){
            if(arr[i]==left){
                count++;
                break;}}}
    i++;
    if(i>=n)
        return 0;
    else if(arr[i]!=right){
        count++;
        return Count(arr,n,right,left);}
    else if(arr[i]==right)
        return count+1;
    return count;
}
