#include<stdio.h>

main()
{
	int a,b,c;
	float d;
	
	printf("Enter maths marks=");
	scanf("%d",&a);
	
	printf("Enter english marks=");
	scanf("%d",&b);
	
	printf("Enter hindi marks=");
	scanf("%d",&c);
	
	d=a+b+c;
	
	printf("Average mark= %.2f",d/3);
}
