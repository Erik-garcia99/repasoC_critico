/*
la funcion tiene un parametro que un puntero a funcion tipo int(*)(const void *, const void*)

se necesita una funcion de comparacion, que devuelva negativo si primer arguemnto es menor que el seguno, 

0 si son iguales 

positivo si es mayor
*/

#include<stdio.h>
#include<stdlib.h>
#define my_main main

int compara_float(const void *a, const void *b);

float v[] = {34.5,12.3,4.5,9.1,-2.5,18.0,10,5.5};

int my_main(){

    int j, n;

    int (*pf)(const void *, const void*); //puntero a funcion 

    n = sizeof(v)/(sizeof(v[0])); //numero de elementos 

    printf("\nnumero de elementos %d\n",n);

    pf=compara_float;
    qsort((void*)v, n, sizeof((v[0])),pf); //llamada a la funcion de biblioteca 

    int i;
    for(i=0;j<n;i++){
        printf("%.2f", v[j++]);
    }

    puts("\npulsa cualquier tecla para continar...");
    j=getchar();

    return 0; 
}

int compara_float(const void *a, const void *b){

    float *x, *y;
    x=(float *)a; 
    y=(float *)b;

    return(*x -*y);
}