// Assignment-1
// Roll No. - T014
// Q)17

#include <stdio.h>

int main()
{
  int rows;
  printf("\t\t\t----Part (a)----\n\n");
  printf("Enter rows: ");
  scanf("%d",&rows);
  for(int i=0;i<=rows;i++)
  {
    for(int j=1;j<=i;j++)
      printf("%d",j);
    printf("\n");
  }
  printf("\n\n\t\t\t----Part (b)----\n\n");
  printf("Enter rows: ");
  scanf("%d",&rows);
  for(int i=0;i<=rows;i++)
  {
    for(int j=1;j<=i;j++)
      printf("%d",i);
    printf("\n");
  }
  return 0;
}
