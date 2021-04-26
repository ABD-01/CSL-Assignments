// Assignment-1
// Roll No. - T014
// Q)16

#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Input in INTEGER format only\n");
    read :
    printf("\nEnter Date: ");
    scanf("%d",&d);
    printf("Enter Month: ");
    scanf("%d",&m);
    printf("Enter Year: ");
    scanf("%d",&y);
    if(d>31 || m>12 || d<1 || m<1 || y<1 || (m==2 && d>29) || ((m==4 || m==6 || m==9 || m==11) && d>30))
    {
        printf("INVALID INPUT !!!\nTry Again\n");
        goto read;
    }
    if(m==2 && d==29)
    {
        if(y%4!=0 || (y%100==0 && y%400!=0))
        {
            printf("It's NOT a Leap Year.INVALID INPUT !!! Try Again\n");
            goto read;
        }

    }
    printf("\nThe date is : ");
    switch(d)
    {
        case 1 : printf("%dst ",d);
                 break;
        case 2 : printf("%dnd ",d);
                 break;
        case 3 : printf("%drd ",d);
                 break;
        case 21 : printf("%dst ",d);
                 break;
        case 22 : printf("%dnd ",d);
                 break;
        case 23 : printf("%drd ",d);
                 break;
        case 31 : printf("%dst ",d);
                 break;
        default : printf("%dth ",d);
                  break;
    }
    switch(m)
    {
        case 1 : printf("January, ");
                 break;
        case 2 : printf("February, ");
                 break;
        case 3 : printf("March, ");
                 break;
        case 4 : printf("April, ");
                 break;
        case 5 : printf("May, ");
                 break;
        case 6 : printf("June, ");
                 break;
        case 7 : printf("July, ");
                 break;
        case 8 : printf("August, ");
                 break;
        case 9 : printf("September, ");
                 break;
        case 10 : printf("October, ");
                 break;
        case 11 : printf("November, ");
                 break;
        case 12 : printf("December, ");
                 break;
    }
    printf("%d .\n",y);
    return 0;
}
