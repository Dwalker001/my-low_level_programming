#include <stdio.h>

/**
 * To output the string, you can use the printf()
 * function together with the format specifier %s to tell C that
 * we are now working with strings:
 * use the %c format specifier to print a single character.
 * use the %s format specifier to print the whole character.
 * when using the long method for printing a string,
 * use the \0 character at the end to specify the end of the string.
 */


int main()

{
    char greetings[] = "Hello! World.";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);
    greetings[7] = 'M';
    printf("%s\n", greetings);

    char greetings1[] = {'H', 'e',  'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings1));
    printf("%lu\n", sizeof(greetings2));
    printf("%s\n", greetings1);



}


