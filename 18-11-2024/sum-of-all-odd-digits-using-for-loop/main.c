
#include <stdio.h>


int sumOddDigits(int number)
{
	int sum=0;
	number=(number<0)?-number:number;
	while(number>0)
	{
		int digit=number%10;
		if(digit%2!=0) //check if the digit is odd
		{
			sum+=digit;
		}
		number/=10;
	}
	return sum;
}
int main()
{
	int num;
	printf("enter the numbers:");
	scanf("%d",&num);
	int result=sumOddDigits(num);
	printf("the sum of odd digits in %d is :%d\n",num,result);

	return 0;
}
