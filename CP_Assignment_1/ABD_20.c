// Assignment-1
// Roll No. - T014
// Q)20

#include <stdio.h>
#include <math.h>
double perim(double a,double b,double c)
{
    return (a+b+c);
}
double area(double a,double b,double c)
{
    double s,x;
    s=0.5*(a+b+c);
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    return x;
}
int main()
{
    double a,b,c;
    printf("Enter the value of Sides: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("\nThe perimeter of Triangle is :%lf",perim(a,b,c));
    printf("\nThe area of Triangle is :%lf\n",area(a,b,c));

    return 0;
}
