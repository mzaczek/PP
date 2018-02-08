#include <stdio.h>

int enta(int x,int n){

return x>>(n-1)&1;
}
int main() {
    printf("Hello, World!\n %d\n",enta(21,5));

    return 0;
}