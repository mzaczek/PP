
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *plik=fopen("q:\\plik.txt", "r");
    char *tekst[100];
    char znak;

    int i=0, j=0;
    printf("działa\n");
    while((znak=fgetc(plik))!=EOF){
        printf("działa\n");
        tekst[i][j]=znak;
        j++;
        if(j>100)i++;
    }



    printf("%s",tekst[0]);
    printf("%s",tekst[1]);


    fclose(plik);
    return 0;
}