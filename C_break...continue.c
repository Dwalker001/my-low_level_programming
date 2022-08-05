#include <stdio.h>

/**
 * break statements can be used to jump out of a loop
 * use the break statements to jump out of a switch
 */
int main(){
int i;
int j;

for (i = 0; i < 20; i++){
if (i == 12){
break;
}
printf("%d\n", i);
}
return i;
}









