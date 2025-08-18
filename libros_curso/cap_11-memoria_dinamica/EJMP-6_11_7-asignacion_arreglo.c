#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h> 
#define N 10

/*
instrucciones: 

El programa ASIGCADS . c lee n líneas de texto, reserva memoria según la longitud de la línea leída, 
cuenta las vocales de cada línea e imprime cada línea y el número de vocales que tiene. 

*/

void salida(char *[], int *);

void entrada(char *[]);

int vocales(char *);

int main(){

    char *cad[N];

    int j, voc[N];

    entrada(cad);

    for(j = 0; j<N; j++){
        voc[j] = vocales(cad[j]);
    }

    salida(cad, voc);
    return 0;
}

void entrada(char *cd[]){

    char B[121];
    int j, tam;

    printf("\nEscribe %d lineas de texto", N);

    for(j= 0; j < N; j ++){
        gets(B);
        tam= (strlen(B) + 1) * sizeof(char);
        cd[j] = (char*)malloc(tam);
        strcpy(cd[j], B);
    }

}

int vocales(char *c){

    int k, j; 

    //cuanta vocales de la cadena c

    for( j = k = 0; j< strlen(c); j++){

        switch(towlower(*(c+j))){
            case 'a':;
            case 'e':;
            case 'i':;
            case 'o':;
            case 'u': k++;
        }
    }

    return k;

}


void salida(char *cd[], int *v){

    int j;

    puts("\n\tsalida de las lines junto al numero de vocales" );

    for( j = 0; j<N; j++){
        printf("%s: %2d\n", cd[j], v[j]);
    }
}




