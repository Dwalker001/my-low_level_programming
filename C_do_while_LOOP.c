#include <stdio.h>

/**
 * in a do/while loop. The loop will always be
 * executed at least once,
 * even if the condition is false
 * because the code block is executed before the condition is tested
 */
int main()
{
int i = -5;

do{
printf("%d\n", i);
i++;
}
while (i < 5);

}

