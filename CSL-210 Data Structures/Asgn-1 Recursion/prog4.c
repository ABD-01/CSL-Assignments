// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)4
// Sum of a number till a single digit, a.k.a Digital Root

#include<stdio.h>
int sumOfDigits(int);
int digitalRoot(int);
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf(" %d", &n);
    printf("Digital Root = %i.\n", digitalRoot(n));
}
int digitalRoot(int num)
{
    int sum = sumOfDigits(num);
    if (sum <= 9)
        return sum;
    return digitalRoot(sum);
}
int sumOfDigits(int x)
{
    return (x) ? x%10 + sumOfDigits(x/10) : 0;
}