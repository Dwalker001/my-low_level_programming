#include <stdio.h>
#include <stdlib.h>

/**
 * main - begins the printf() functions
 * return: 0 ends the main function
 * \n creates new lines after each code
 * \t creates a horizontal tab in my next line of code
 * \\ creates a backlash in my next line of code
 * \" creates a double quote in my code line
 * "%d"(signed integer) is a format specifier and is used to identify values of variables
 * (statement) ? command : command; - This points to shorthand conditionals if, else.
 */

int main(){
    printf("\"Clinton\". \n");
    printf("I am learning C. \n");
    printf("I just learnt how to \"create\" new lines.\n");
    printf("Inserted a double quote.\n");

    int x = 10, y = 52, z = 100, a = 12, m = 67;
    for (int x = 10; x < 20; x++){
        if (x == 18){
            break;
        }
        printf("%d\n", x);
    }
    float b = 10, c = 52, d = 100, e = 12, f = 67;
    if (x == 10)
        printf("X is an int\n");
    if (y > 50)
        printf("Y is huge\n");
    if (z == 90)
        printf("z is larger\n");
        else if (z == 95)
        printf("give z a F....... break\n");
    else
        printf("z is way much larger\n");
    (x == 9) ? printf("x is less than a 10\n") : printf("x carries a value 10\n");
    printf("%d \n", x * y); // = 520
    printf("%d \n", y - x); // = 42
    printf("%d \n", x + y); // = 62
    printf("%d \n", x + y + z / a); // = 70
    printf("%f \n", b + c + d / e);
    printf("%f \n", b * c * d / e);
    printf("%d \n\n", a); // = 12

    int myNum = 20;
    printf("The value of myNum is: " "%d \n", myNum);
    printf("The value of myNum multiplied by 2 is: " "%d \n", myNum * 2);

    const int BIRTHYEAR = 2000;
    const int BIRTHDATE = 7;
    //const char BIRTHMONTH = "January";
    float myFloatNum = 7;
    myFloatNum += 1;
    double myDoubleNum = 15;
    int times = b * c;
    printf("%d \n", times);
    char my_Letter = 'C';
    printf("%f \n", myFloatNum + 24);
    printf("%f \n", myFloatNum * 3);
    printf("%f \n\n", myFloatNum / 10);
    printf("%c", my_Letter);
    printf("linton\n");
    printf("Therefore, my favorite numbers are %d & %f and my  favorite letter is %c \n", myNum, myFloatNum, my_Letter);
    printf("%i \n", my_Letter);
    printf("%lf \n", myDoubleNum);
    printf("%f \n", myFloatNum);
    printf("%d\n", BIRTHYEAR);
    int p = 10;
    int l = 5;
    printf("%d\n", p * l);
    int g = 3;
    (p > 5) ? printf("p ain't a joke\n") : printf("p is a joke\n");
    (l == 10) ? printf("l reminds me of x\n") : printf("l is nowhere close to x\n");
   if (g == "An alphabet"){
        printf("g is an alphabet\n");
    }
    else if (g > 3){
        printf("Greater than itself\n");
    }
    else{
        printf("g is an integer\n");
    }
    int day = 5;

    switch (day){
    case 1:
    printf("Monday\n");
    break;
    case 2:
    printf("Tuesday\n");
    break;
    case 3:
    printf("Wednesday\n");
    break;
    case 4:
    printf("Thursday\n");
    break;
    case 5:
    printf("Friday\n");
    break;
    case 6:
    printf("Saturday\n");
    break;
    case 7:
    printf("Sunday\n");
    break;
    default:
        printf("Looking forward to better days\n");
    }
    for (day = 5; day < 20; day++){
        if(day == 8){
            continue;
        }
        printf("%d\n", day);
    }
    do

    return 0;
    }

