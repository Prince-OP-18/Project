#include <stdio.h>
#include <conio.h>

int main ()
{
    int i = 1, count = 1;

    printf("First 10 odd numbers:\n");

    do
    {
        printf("%d\n", i);
        i += 2;
        count++;
    } while(count <= 10);

    getch();
    return 0;
}
