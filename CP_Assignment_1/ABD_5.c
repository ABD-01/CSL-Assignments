// Assignment-1
// Roll No. - T014
// Q)5

#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int n,osum=0,esum=0;
    srand(time(0));
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    printf("The array: ");
    for(int i=0;i<n;i++)
    {
        array[i]=rand()%50;
        printf("%d ",array[i]);
        if(array[i]%2==0) 
        	esum+=array[i];
        else
        	 osum+=array[i] ;
    }
    (esum>=osum)? printf("\nSum of even elements is %d\n",esum) : printf("\nSum of odd elements is %d\n",osum);
    
}
