//calcular la longitud de un arreglo - cadena 

#include<stdio.h>
#include<conio.h>

int longitud(char cad[]);



void main(){


    char *cd = "cuaquier momento es bueno para la felicidad";

    printf("\nlongitud de la cadena \" %s \": %d\n", cd, longitud(cd));


    puts("pulse cualquer tecla para continua:");
    getch();
}


int longitud(char cad[]){


    int cuenta = 0; 

    while(cad[cuenta++] != '\0');
    return cuenta;
}























