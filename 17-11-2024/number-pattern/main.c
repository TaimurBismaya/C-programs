
#include <stdio.h>

int main()
{
	int i,j, rows=4,num=1;
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=i; j++)
		{
	printf("%d",num++);
		}
	printf("\n");
}
	return 0;
}
