// Assignment-1
// Roll No. - T014
// Q)11

#include <stdio.h>
int main()
{
	float units,charge;
	printf("An Electricity board charges the following rates for use of electricity.\nFor the First 200 units : Rs 1 per unit\nFor the next 100 units : Rs 1.5 per unit\nBeyond 300 units : Rs 2 Per unit.\n\nEnter units Consumed: ");
	scanf("%f",&units);
	if(units>0 && units<=200)
		charge=units;
	else if(units>200 && units<=300)
		charge=(units-200)*1.5 +200;
	else if(units>300)
		charge=(units-300)*2 +350;
	printf("The Electric Board Charges are: Rs %.2f\n",charge);
}
