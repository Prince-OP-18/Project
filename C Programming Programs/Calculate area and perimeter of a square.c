#include <conio.h>
#include <stdio.h>
int main() {
    float L;
    printf("Enter side of square: ");
    scanf("%f", &L);
    printf("Area = %.2f\n", L * L);
    printf("Perimeter = %.2f\n", 4 * L);

    getch();
    return 0;
}
