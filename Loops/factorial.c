#include <stdio.h>

int main() {
    int n,sum = 1;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        sum  = sum*i;
    }
    printf("%d is the factorial of %d",sum,n);    
    
    return 0;
}





