#include <stdio.h>

void binary(int a){
    int i;
    int x=a;
    int licznik=0;
    while(x!=0){
        licznik++;
        x=x>>1;
    }
    printf("licznik %d\n",licznik);
for(i=licznik;i>0;i--){
    printf("%d\t",(a>>(i-1)&1));
}

}
int main() {
    printf("Hello, World!\n");
    binary(210);
    return 0;
}