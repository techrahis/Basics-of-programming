#include <stdio.h>

int main() {
    int i, *ptr[3];
    int arr[3] = {1,2,3};
    
    for(i=0;i<3;i++)
        ptr[i] = &arr[i];
    for(i=0;i<3;i++)   
        printf("Value %d : %d\n",i,*ptr[i]);
    
    return 0;
}