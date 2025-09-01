#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MX 99



///estrucutra de nados 
struct Nodo{
    int Item;
    struct Nodo *sig;
};


//funciones de la estrucutra
//creacion de NODO
struct Nodo *crearNodo(int dato);
//funcion push
struct Nodo *push(int dato, struct Nodo *heap);



int main(void){

    //ahora necesitamos crear la lista de numeros randoms 
    struct Nodo *tope=NULL;
   
   /* for(int i=0; i<10;i++){
        int random= rand()%10; //genera numero de 0 a 10 al parecer

        printf("%d\n",random);
    }*/

    //se ingresara numeros hasta que se genere el 0 

    int random=-1;
    int iteraciones=0;


    while(iteraciones <= 10){
        random=rand()%10;
        printf("nuermo: %d\n", random);

        //si aun no se ha creado la lista, la creamos primero
        if(tope==NULL){
            tope=crearNodo(random);
        }
        else{
            tope=push(random,tope);
        }
        iteraciones++;
    }

    struct Nodo *aux=tope;

    printf("impresion de la lista");
    while(aux->sig!=NULL){
        printf("-%d\n",aux->Item);
        aux=aux->sig;
    }

    //esto es algo importante, y es por eso que el recorrido de las listas se hace en funciones a aprte, lo que me paso aqui es que imprime la lista y quise volver a repasar para imprimir, pero ahora el apuntador estaba en el nodo final, es improtante siempre tener la referencia al inicio, porque si no se pierde. 
    aux=tope;


    

    //ahora imprimrimos la lista en busca de elementos que sean par 
    printf("numeros pares\n");
    while(aux->sig!=NULL){

        if(aux->Item%2==0){

            printf("-%d ", aux->Item);
        }

        aux=aux->sig;
    }
}


struct Nodo *crearNodo(int dato){

    struct Nodo *nuevo;

    nuevo=(struct Nodo*)malloc(sizeof(struct Nodo));
    nuevo->Item= dato;
    nuevo->sig=NULL;
    return nuevo;
}

struct Nodo *push(int dato, struct Nodo *heap){

    struct Nodo *aux = heap;
    struct Nodo *nuevo = crearNodo(dato);
    nuevo->sig= aux;
    heap=nuevo;
    return heap;
}






