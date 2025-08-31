#include <stdio.h>
#include <conio.h>

int main() {
    int i = 1;
    printf("First 10 natural numbers:\n");
    do {
        printf("%d ", i);
        i++;
    } while(i <= 10);
    getch();
    return 0;
}
