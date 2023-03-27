#include <stdio.h>

main()
{
    /* Verify the expression equals 1 by running the program and 
     * entering any valid character.
     *
     * Verify the expression equals 0 by running the program and
     * pressing Ctrl-D.
     */
    printf("Result: %d\n", (getchar() != EOF));
}
