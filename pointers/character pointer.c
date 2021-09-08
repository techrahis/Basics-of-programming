#include <stdio.h>

int main() {
    int i;
    char *arr[4] = {"Raj","Tithi","Tintin","Titan"};
    
    for(i=0;i<4;i++)   
        printf("Value %d : %s\n",i,arr[i]);
    
    return 0;
}