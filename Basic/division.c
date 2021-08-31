#include <stdio.h>

int main() {
    int divisor,divident,quotient,remainderr;
    scanf("%d %d",&divident,&divisor);
    quotient = divident / divisor;
    remainderr = divident % divisor;
    printf("%d %d",quotient,remainderr);
    return 0;
}