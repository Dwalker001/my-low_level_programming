#include <stdio.h>

/** The switch statements
 *  It is used in place of the if..else statements
 *  it gives your code less bulk too
 */


int main()
{
int year = 2000;
switch (year){
case 1998:
    printf("1998");
    break;
case 1999:
    printf("1999");
    break;
case 2001:
    printf("2001");
    break;
case 2019:
    printf("2019");
    break;
case 2000:
    printf("2000, my year of first breath... Yipee!");
    break;
case 2008:
    printf("2008");
    break;

    default: printf("Sorry. No such year");
}
    return 0;

}

