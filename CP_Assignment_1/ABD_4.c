// Assignment-1
// Roll No. - T014
// Q)4

#include<stdio.h>
#include<math.h>
int isTriangular(int n)
{
    float D,x,y;
    D =sqrt(1+8*n); 
    x=(-1+D)/2;
    y=(-1-D)/2;
    if(x==(int)x || y==(int)y) 
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    (isTriangular(num)==1) ? printf("%d is a triangular no.\n",num) : printf("%d is not a triangular no.\n",num);
}
