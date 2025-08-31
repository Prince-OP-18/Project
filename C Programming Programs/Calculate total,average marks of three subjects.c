#include <stdio.h>
#include <conio.h>

int main() {
    int m1, m2, m3, total;
    float avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if(m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Student FAIL (scored less than 35 in a subject)");
    } else {
        total = m1 + m2 + m3;
        avg = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);

        if(avg >= 70)
            printf("Class: Distinction");
        else if(avg >= 60)
            printf("Class: First Class");
        else if(avg >= 50)
            printf("Class: Second Class");
        else if(avg >= 35)
            printf("Class: Third Class");
        else
            printf("Fail");
    }

    getch();
    return 0;
}
