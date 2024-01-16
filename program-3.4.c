#include <stdio.h>

main() {
    float p, r, t, s;

    //  Simple interest for principal(p), rate(r) and time(t) :
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &r);

    printf("Enter the time (in years): ");
    scanf("%f", &t);
 									
    s = (p * r * t) / 100;  

    // Display the simple interest
    printf("Simple Interest = %.2f\n", s);

}
