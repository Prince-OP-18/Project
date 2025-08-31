#include <conio.h>
#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (5.0/9.0) * (f - 32);
    printf("Celsius = %.2f\n", c);

    getch();
    return 0;
}
