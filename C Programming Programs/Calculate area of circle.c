#include <conio.h>
#include <stdio.h>
int main() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", (22.0/7.0) * r * r);

    getch();
    return 0;
}

