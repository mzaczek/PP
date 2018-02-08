#include <stdio.h>
#include<stdbool.h>
void fun(bool *c,int x,bool a){
    c[x]=a;
}
bool funk(bool *c,int x){
    return c[x];
}
int main() {

    printf("Hello, World!\n");
    bool x[10];
    bool a=true;
    fun(x,0b10,a);
    printf("%d\n",funk(x,0b101));
    printf("%d",x[2]);
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",*(x+i));
    }

    return 0;
}