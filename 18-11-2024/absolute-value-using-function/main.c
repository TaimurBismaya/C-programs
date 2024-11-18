
#include <stdio.h>

int main()
{
	int absoluteValue(int number)
	{
	return (number<0)? -number:number;
}
int main()
{
	int num;
     printf("enter an integer:");
	 scanf("%d",&num);
	 int absValue=absoluteValue(num);
	 printf("absolute value of %d is:%d\n",num,absValue);

	return 0;
}
}