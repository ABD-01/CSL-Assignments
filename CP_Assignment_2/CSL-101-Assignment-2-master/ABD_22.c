// Assignment-2
// Mohammed Abdlulah
// Roll No. - T014
// Q)22

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\tQuestion: WAP to create an array output such that element[i] is\n\tequal to the product of all elements of A except A [i].\n\n");
    srand(time(0));
    long int n,arr[100],parr[100],i,ch;
    printf("Select your choice\n0)Custom Input Array\t1)Random Generated Array\n");
    scanf("%ld",&ch);
    printf("Enter the number of Elements: ");
    scanf("%ld",&n);
    printf("The Array: \n");
    for(i=0;i<n;i++)
    {
        if(ch==0)
            scanf("%ld",&arr[i]);
        else{
        arr[i]=1+rand()%10;
        printf("%ld  ",arr[i]);
        }
        parr[i]=1;
    }
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(j!=i)
                parr[i]*=arr[j];
    printf("\nThe output Array:\n");
    for(i=0;i<n;i++)
        printf("%ld  ",parr[i]);

    return 0;
}
