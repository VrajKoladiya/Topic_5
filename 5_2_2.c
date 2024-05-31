#include<stdio.h>

main()
{
	float a, b, c, d;
	
	printf("Enter a value of the first number: ");
	scanf("%f",&a);
	
	printf("Enter a value of the second number: ");
	scanf("%f",&b);
	
	printf("Enter a value of the third number: ");
	scanf("%f",&c);
	
	printf("Enter a value of the fourth number: ");
	scanf("%f",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("The maximum value is: %.2f",a);
			}
			else
			{
				printf("The maximum value is: %.2f",b);
			}
		}
		else
		{
			if(c>d)
			{
				printf("The maximum value is: %.2f",c);
			}
			else
			{
				printf("The maximum value is: %.2f",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("The maximum value is: %.2f",b);
			}
			else
			{
				printf("The maximum value is: %.2f",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("The maximum value is: %.2f",c);
			}
			else
			{
				printf("The maximum value is: %.2f",d);
			}
		}
	}
}
