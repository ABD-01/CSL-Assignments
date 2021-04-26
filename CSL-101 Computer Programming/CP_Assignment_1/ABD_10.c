// Assignment-1
// Roll No. - T014
// Q)10

#include <stdio.h>
float celsius(float f)
{
  float c=(5*(f-32))/9 ;
  return c;
}

int main()
{
  printf("Fahrenheit\t\t\tCelsius\n");
  for(float i=-40;i<=220;i=i+10)
  {
    printf(" %.1f\t\t\t %.3f\n",i,celsius(i));
  }
  return 0;
}
