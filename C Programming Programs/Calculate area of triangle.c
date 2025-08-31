#include <conio.h>
#include <stdio.h>
int main() {
    float h, b;
    printf("Enter height and base: ");
    scanf("%f %f", &h, &b);
    printf("Area = %.2f\n", (h * b) / 2);

    getch();
    return 0;
}
