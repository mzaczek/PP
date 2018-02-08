#include <stdio.h>

int uuu(){
return 2*2;
}
void as(int (*x))
void fun(int (*x)()){
    printf("%d",x());
}

int main() {
    printf("Hello, World!\n");
    int (*wsk)();
    wsk=uuu;
    fun(wsk);
    return 0;
}