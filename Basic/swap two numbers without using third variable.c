#include <stdio.h>

int main() {
    int numOne,numTwo;
    scanf("%d %d",&numOne,&numTwo);
    numOne = numOne - numTwo;
    numTwo = numOne + numTwo;
    numOne = numTwo - numOne;
    printf("Num One : %d\nNum Two : %d",numOne,numTwo);
    return 0;
}