#include <conio.h>
#include <stdio.h>
int main() {
    float s1, s2, s3, total, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    getch();
    return 0;
}
