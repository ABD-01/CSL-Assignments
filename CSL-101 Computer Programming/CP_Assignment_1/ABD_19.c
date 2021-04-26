// Assignment-1
// Roll No. - T014
// Q)19

#include <stdio.h>
int isprime(int a);
int isugly(int num);
int main()
{
	int num,i;
	printf("Ugly Primes from 1 to n.\nEnter value of n: ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(isugly(i)!=0)
			printf("%d\n",i);
	}
}
int isugly(int num)
{
	int prdiv,ugly=1;
	
	for(int i=2;i<=num;i++)
	{
	    if(num%i==0 && isprime(i)!=0)
	    	prdiv=i;
	    if(prdiv!=2 && prdiv!=3 && prdiv!=5)
	    {
	    	ugly=0;
	    	break;
	    }
	}
	return ugly;
}
int isprime(int a)
{
    int prime=a;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
