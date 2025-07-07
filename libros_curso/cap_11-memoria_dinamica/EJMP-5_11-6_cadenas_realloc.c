/*

En este ejemplo se leen dos cadenas de caracteres; si la segunda cadena comienza por COPIA .se añade 
a la primera. La memoria se reserva con real 1 oc ( ) .

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char *C1 =NULL, *C2 =NULL, B[121];

    char *clave = "COPIA";

    int tam;

    puts("\n\t Primera cadena");
    gets(B);

    tam =(strlen(B) +1) *sizeof(char);

    C1 = (char *)realloc(C1,tam);

    strcpy(C1, B);

    puts("\n\t Segunda cadena:");
    gets(B);

    tam= (strlen(B) +1) *sizeof(char);

    C2 = (char*)realloc(C2, tam);
    strcpy(C2,B);

    //comparar los primero caracteres de C2 con clave, la compracion se realiza con la funcion strcmp()


    if(strlen(clave) <= strlen(C2)){
        int j;

        char *R =NULL; 

        R = realloc(R, (strlen(clave) + 1) * sizeof(char));
    }

}