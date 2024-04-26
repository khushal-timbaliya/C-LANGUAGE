#include <stdio.h>
#include<math.h>

int main() {
    float principal, rate, time;
    float amount, compound;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    rate /= 100;

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    amount = principal * pow(1 + rate, time);

    compound = amount - principal;

    printf("Compound Interest is: %.2lf\n", compound);

}