// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)5

#include<stdio.h>
void print(int,int);
int main()
{
    print(1,1);
}
void print(int n, int up)
{
    if (!n)
        return;
    printf("%d ",n);
    if (n == 1024)
    {
        printf("%d ",n);
        up = 0;
    }
    if (up)
        print(n*2, up);
    else 
        print(n/2, up);
}