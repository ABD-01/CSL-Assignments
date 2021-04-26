// Assignment-1
// Muhammed Abdullah
// Enrl. No.: BT19EEE096
// Q)6
// Bear Problem

#include<stdio.h>
int bearGame(int);
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf(" %d", &n);
    printf("%d ", bearGame(n));
}
int bearGame(int bears)
{
    printf("%i\n",bears);
    if (bears < 42)
        return 0;
    if (bears == 42)
        return 1;
    else if (bears%5 == 0)
        return bearGame(bears - 42);
    else if ((bears%3 == 0) || (bears%4 == 0))
        return bearGame(bears - ( (bears%10)*((bears/100)%10) ));
    else if (bears % 2 == 0)
        return bearGame(bears/2);
    else
        return 0;
}