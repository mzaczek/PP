#include <stdio.h>
#define NPARZ(x) (x%3==0 && x%2==1)? 1:0

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    a=~(a^(~b));
    printf("%d", a);
    a=(a|b)&(~b);
        printf("\n%d\n", a);
    printf("%d",NPARZ(3));
   // printf("Hello world!\n");
    return 0;
}