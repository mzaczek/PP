#include <stdio.h>
void zamiana(char *nazwa,char *slowo){
    FILE *fp = fopen(nazwa,"r+");
    char c;
    int i=0;
    while(c!=EOF) {
        c = fgetc(fp);
        if (c == '*') i++;
        if(i==5){
            fseek(fp,-5,1);
            fprintf(fp,"%s",slowo);
            i=0;
        }
        if (c!='*')i=0;
    }


}
int main() {
    char *slowo="xxxxx";
    char *nazwa="q:\\plik.txt";
    zamiana(nazwa,slowo);
    printf("Hello, World!\n");
    return 0;
}