#include<stdio.h>
#define PI 3.14


main()
{
		// Perimeter of the circle
	float r,p;
	printf("Enter the value of radius: ");
	scanf("%f",&r);
	
	p=2*PI*r;
	
	// display the value
	printf("The Perimeter of the circle  :- %.2f",p);
	
}
