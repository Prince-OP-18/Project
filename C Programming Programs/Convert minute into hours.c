#include <conio.h>
#include <stdio.h>
int main() {
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("%d minutes = %.2f hours\n", minutes, minutes / 60.0);
    return 0;
}
