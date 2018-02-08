#include <stdio.h>
#include<stdbool.h>

bool f(int x){
    int a=1;
    for(a;a<=x;a<<=1){
        if(a==x)return true;
    }
    return false;
}
int main() {
    printf("Hello, World!\n %d\n",f(102400));

    return 0;
}