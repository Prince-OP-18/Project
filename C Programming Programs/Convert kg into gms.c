#include <conio.h>
#include <stdio.h>
int main() {
    float kg;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    printf("%.2f kg = %.2f grams\n", kg, kg * 1000);
    return 0;
}
