//ejemplo de pasar funcion por puntero 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<search.h>
#include<math.h>

/*

en este progama se pasa la funcion <<comparar()>> como parametro puntero a <<qsort()>>, <<bsearch()>>. 

 La función comparar ( ) compara entradas del array tabla y 
devuelve (retorna) un número negativo si argl es menor que arg2, devuelve cero si son iguales, o un 
número positivo si argl es mayor que arg2 .


*/

int comparar(const void *arg1, const void *arg2);


int main(){


    int i, x;
    int tabla[15];
    int *b;


    ///randomsize();
    //generar tabla de elemntos aleatiorsde 1 a 100

    for(i = 0; i< 15 ; i++){

        tabla[i] = rand() / 10;

    }

    printf("\nLista original:\n");
    for(i = 0; i< 15; i++){

        printf("%d - ", tabla[i]);

    }

    //ordena tabla utilizando algoritmo de quicksort

    qsort((void *)tabla,(size_t)15,sizeof(int),comparar);

    printf("\nlista ordenada\n");
    for(i = 0; i< 15 ; i++){

        printf("%d - ", tabla[i]);
    }

    printf("clave a buscar: ");
    scanf("%d", &x);

    //busqyeda binaria

    b = bsearch(&x,(void *)tabla,(size_t)15,sizeof(int), comparar);

    if(b){
        //clave encontrada

        printf("\nel elemento %d esta en la tabla ",x);
    }
    else{
        printf("\nel elemento %d no esta en la tabla ",x);
    }

    printf("\npulsa cualquier tecla para continua ");
    i = getchar();




}



int comparar(const void *arg1, const void *arg2){


    return *(int *)arg1 - *(int *)arg2;



}