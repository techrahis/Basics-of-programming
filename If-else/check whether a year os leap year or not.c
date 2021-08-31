#include <stdio.h>

/* 
    A leap year is exactly divisible by 4 except for century years (years ending with 00).
    The century year is a leap year only if it is perfectly divisible by 400.
    
    For example,
    
        1999 is not a leap year
        2000 is a leap year
        2004 is a leap year
*/

int main() {
    int year;
    scanf("%d",&year);
    (year % 400 == 0) ? printf("Is a leap year") : 
    (year % 100 != 0 && year % 4 == 0) ? printf("Is a leap year") : 
    printf("Is not a leap year");
    
    return 0;
}

