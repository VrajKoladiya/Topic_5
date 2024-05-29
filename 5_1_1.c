#include<stdio.h>

main()
{
	float a, b;
	printf("Enter a value of the first number= ");
	scanf("%f", &a);
	
	printf("Enter a value of the second number= ");
	scanf("%f", &b);
	
	if(a>b)
	{
		printf("The minimum value is=%.2f",b);
	}
	else
	{
		printf("The minimum value is=%.2f",a);
	}
}
