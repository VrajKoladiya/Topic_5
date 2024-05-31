#include<stdio.h>

main()
{
	float a, b, c;
	
	printf("Enter a value of the first number = ");                                          
	scanf("%f",&a);
	
	printf("Enter a value of the second number = ");
	scanf("%f",&b);
	
	printf("Enter a value of the third number = ");
	scanf("%f",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("The minimum value is = %.2f",a);
		}
		else
		{
			printf("The minimum value is = %.2f",c);
		}
		
	}
	else
	{
		if(b<c)
		{
			printf("The minimum value is = %.2f",b);
		}
		else
		{
			printf("The minimum value is = %.2f",c);
		}
	}
}