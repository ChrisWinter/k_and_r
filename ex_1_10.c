#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else {
            putchar(c);
        }
    }
}
