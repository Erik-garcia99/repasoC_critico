//reservar memora apra una cadena y despues ampliar 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *cadena;
    int tam;
    tam = (strlen("primavera") + 1) * sizeof(char);
    cadena = (char *)malloc(tam);
    
    strcpy(cadena, "primavera");
    puts(cadena);

    tam +=(strlen(" en lupita\n") +1) *sizeof(char);
    cadena = (char *)realloc(cadena, tam);
    strcat(cadena, " en lupita\n");
    puts(cadena);

    free(cadena);
    return 0;
}