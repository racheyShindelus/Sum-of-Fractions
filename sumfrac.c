#include <stdio.h>

int main()
{
    printf("This program will sum two fractions.\n");
    int numerator1, denominator1;
    int numerator2, denominator2;
    printf("Enter the first fraction: ");
    scanf("%d/%d", &numerator1, &denominator1);
    printf("Enter the second fraction: ");
    scanf("%d/%d", &numerator2, &denominator2);
    int sumOfNumerator = (numerator1 * denominator2) + (numerator2 * denominator1);
    int sumOfDenominator = denominator1 * denominator2;
    printf("The sum is: %d/%d\n", sumOfNumerator, sumOfDenominator);
    return 0;
}