
#include <stdio.h>





int calculate();
int main()
{
	calculate();
	return 0;
}
int calculate()
{
	float p,t,r,si;
	printf("\nEnter Principal,Rate,time\n");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*t*r)/100;
	printf("The Simple Interest of given value is %.2f",si);
	return 0;
}
