#include <stdio.h>

/* count blanks, tabs, and newlines in input */
main()
{
    int c, blanks, tabs, newlines;

    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;

    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
}
