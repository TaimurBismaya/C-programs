
#include <stdio.h>

int main()
{
    int number,count=0;
    printf("enter a positive integer:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
printf("the number of factors of %d is:%d\n",number,count);
    return 0;
}
