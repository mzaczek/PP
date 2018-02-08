#include <stdio.h>

typedef struct pola
{
    char *napis;
    float(*wsk)(float, float);

}pola;
float trojkat(float a, float h)
{

    return (a*h)/2;
}
float prostokat(float a, float b)
{
    return a*b;
}
int main()
{
    pola p[2];
    p[0].napis="trojkat";
    p[0].wsk= trojkat;


    printf("%f %s", p[0].wsk(2.4,4.5),p[0].napis);



    return 0;
}