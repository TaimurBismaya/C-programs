
#include <stdio.h>

int main()
{
    
    char letter='A';
	int i,j,rows=4;
	
	
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
		 
			printf("%c",letter);
			

		}
		printf("\n");
	}


	return 0;
}
