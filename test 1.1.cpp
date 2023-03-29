#include<stdio.h>
int main()
{
	int i,num1, num2, count = 0, sum = 0;
	
	printf("enter the value of num1 and num 2 \n");
	scanf("%d %d",&num1,&num2);
	printf("integer divisible by 5 are\n");
	for(i=num1;i<num2;i++)
	{
		if(i % 5 ==0)
		{
			printf("%13d,",i);
			count++;
			sum = sum + i;
		}
	}
	printf("\n number of integers divisible by 5 between %d and %d and %d= %d\n",num1, num2, count);
	printf("sum of all integers that are divisible by 5 = %d\n",sum);
}
