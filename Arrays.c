#include <stdio.h>

/**
 * An array is like a container
 * it holds values of like sorts
 * having indexes that represent each value
 * values in arrays can be changed too
 */

int main()
{
    int myNumbers[] = {10, 20, 40, 70, 75, 100};
    printf("%d\n", myNumbers[3]);
    myNumbers[1] = 33;
    printf("%d\n", myNumbers[1]);// Now outputs a 33 instead of a 20


return 0;
}
