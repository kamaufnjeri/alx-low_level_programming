#include <stdio.h>

int main()
{
    int a = 0;
    long int b = 0, c = 1, next;

    while (a < 98)
    {
        next = b + c;
        b = c;
        c = next;
        printf("%lu", next);
        if (a < 97)
        {
            printf(", ");
        }a++;
    }putchar('\n');
    return (0);
}
