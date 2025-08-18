#include<stdio.h>
#include<stdlib.h>


/*

probelma: 
Escriba un programa para leer n cadenas de 
caracteres. Cada cadena tiene una longitud 
variable y está formada por cualquier carácter. 
La memoria que ocupa cada cadena se ha de 
ajustar al tamaño que tiene. Una vez leídas las 
cadenas se debe de realizar un proceso que 
consiste en eliminar todos los blancos, siempre 
manteniendo el espacio ocupado ajustado al 
número de caracteres. El programa debe 
mostrar las cadenas leídas y las cadenas 
transformadas. 

*/



int main(void){


    char *original;
    printf("ingrese la cadena:\n");
    gets(original);

    int tamanio_original = sizeof(original)/(sizeof(original[0]));

    printf("\noriginal: %s", original);
    printf("\ntamanio: %d", tamanio_original);

    int i=0; 

    int count_blank = 0;
    while(i < tamanio_original ){

        if(original[i] ==" "){
            count_blank++;
        }
        i++;
    }

    printf("\nconto en blancos: %d", count_blank);

    char *caracter_sin_blanco = (char*)malloc(sizeof(char) - count_blank);


    i = 0; 
    int conteo = tamanio_original - count_blank;



    while ( i < conteo)
    {
        if(original[i] != ' '){
            caracter_sin_blanco[i] = original[i];
        }
        i++;
    }

    printf("\nsin rspacios en blanco: %s", caracter_sin_blanco);
    



    




}