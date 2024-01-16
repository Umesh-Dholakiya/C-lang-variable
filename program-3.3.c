#include<stdio.h>

main() {
	
	 // area of a triangle in base(b) and height(h) :
	
    float b, h, r;

    printf("Enter the base of the triangle: ");
    scanf("%f", &b);

    printf("Enter the height of the triangle: ");
    scanf("%f", &h);

    r = 0.5 * b * h;

    // Display the area of the triangle
    printf("The area of the triangle with base %.2f and height %.2f : %.2f\n", b, h, r);

}
