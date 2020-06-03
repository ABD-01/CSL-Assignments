// Assignment-1
// Roll No. - T014
// Q)9

#include <stdio.h>

int main()
{
  float basic;
  int c;
  printf("Enter the Basic Salary: ");
  scanf("%f",&basic);
  c=(basic-1)/4000 ;
  switch(c)
  {
    case 0 : printf("\nThe Gross Salary is: %f\n",basic*1.6);
             break;
    case 1 : printf("\nThe Gross Salary is: %f\n",basic*1.8);
             break;
    case 2 : printf("\nThe Gross Salary is: %f\n",basic*1.95);
             break;
    default : printf("\nThe Gross Salary is: %f\n",basic*2.1);
              break;
  }
  return 0;
}
