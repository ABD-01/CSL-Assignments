// Assignment-1
// Roll No. - T014
// Q)13

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void UNI(int A[],int a,int B[],int b);
void INT(int A[],int a,int B[],int b);
void DIF(int A[],int a,int B[],int b);
void print(int array[],int count);
int main()
{
    srand(time(0));

	int a,b,i;
	printf("Enter the number of elements in A[]: ");
	scanf("%d",&a);
	printf("Enter the number of elements in B[]: ");
	scanf("%d",&b);
	int A[a],B[b];
	for(i=0;i<a;i++)
        A[i]=rand()%20+1;
    for(i=0;i<b;i++)
        B[i]=rand()%20+1;
  	printf("\nElements of A are:");
    print(A,a);
  	printf("\nElements of B are:");
    print(B,b);
	UNI(A,a,B,b);
	INT(A,a,B,b);
	DIF(A,a,B,b);
	return 0;
}
  void UNI(int A[],int a,int B[],int b)
  {
  	int i,j,k,AUB[a+b];
  	for (i=0;i<a;i++)
  	{
  		AUB[i]=A[i];
  	}
  	k=i;
  	for (j=0;j<b;j++)
  	{
  		for (i=0;i<a;i++)
  		{
  			if (B[j]==A[i])
  				break;
  			else if (i==a-1)
  			{
  				AUB[k]=B[j];
  				k++;
  			}
  		}
  	}
  	printf("\nElements of A Union B are:");
  	print(AUB,k);
  }
  void INT(int A[],int a,int B[],int b)
  {
  		int i,j,k=0,AIB[a>b?b:a];
  		for (i=0;i<a;i++)
  		{
  			for (j=0;j<b;j++)
  			{
  				if (A[i]==B[j])
  				{
  					AIB[k]=A[i];
  					k++;
  					break;
  				}
  			}
  		}
  		printf("\nElements of A Intersection B are:");
  		print(AIB,k);
  }
  void DIF(int A[],int a,int B[],int b)
  {
  	int i,j,k=0,ADB[a],BDA[b];
  	for (i=0;i<a;i++)//A-B
  	{
  		for (j=0;j<b;j++)
  		{
  			if (A[i]==B[j])
  				break;
  			else if (j==b-1)
  			{
  				ADB[k]=A[i];
  				k++;
  			}
  		}
  	}
   	printf("\nElements of set A-B are:");
   	print(ADB,k);

  	k=0;
  	for (j=0;j<b;j++)
  	{
  		for (i=0;i<a;i++)
  		{
  			if (B[j]==A[i])
  				break;
  			else if (i==a-1)
  			{
  				BDA[k]=B[j];
  				k++;
  			}
  		}
  	}
  	printf("Elements of set B-A are:\n");
  	print(BDA,k);
  }
  void print(int array[],int count)
{
    printf("\n");
    for(int i=0;i<count;i++)
        printf("%d  ",array[i]);
    printf("\n");
}
