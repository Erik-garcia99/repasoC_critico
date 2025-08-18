/*
La extracción de caracteres se realiza en una función que tiene como primer argumento la subcadena a 
extraer, como segundo argumento la cadena fuente y el tercero el número de caracteres a extraer. Se 
utilizan los punteros para pasar arrays a la función. 

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


int extraer(char *dest, const char *fuente, int num_cars);


int main(void){


    char s1[81];
    char *s2;
    int n;

    printf("\n\t cadena a analizar ?:");
    gets(s1);

    do{

        printf("numero de caracteres a extraer: ");
        scanf("%d", &n);
    }while( n < 1 || n >strlen(s1));

    s2 = malloc((n+1) * sizeof(char));

    extraer(s2,s1,n);

    printf("cadena extraida \"%s\"", s2);

    puts("\npulse intro para continar:");
    getch();
}

//por lo que podemos ver la manera mejor y mas facil de psar cadenas o un arreglo es por medio de punteros.
int extraer(char *dest, const char *fuente, int num_cars){

    int cuenta;

    for(cuenta = 1; cuenta <= num_cars ; cuenta++){

        *dest++ = *fuente++;
    }

    *dest = '\0';
    return cuenta; //devuelel numero de cracteres
}










