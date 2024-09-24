#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;
    int n;

    // Input the principal amount, rate, time and number of times interest is compounded per year
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate compound interest
    compoundInterest = principal * pow((1 + (rate / (100 * n))), n * time);

    // Print the final amount including interest
    printf("The final amount including interest is: %.2lf\n", compoundInterest);

    return 0;
}