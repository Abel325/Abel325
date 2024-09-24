#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}