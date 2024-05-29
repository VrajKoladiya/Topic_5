#include<stdio.h>

main()
{
	float a;
	printf("Enter any number=" );
	scanf("%f",&a);
	
	if(a>0)
	{
		printf("This number is Positive");
	}
	else if(a==0)
	{
		printf("This number is Neutral");
	}
	else
	{
		printf("This number is Negative");
	}
}
