#include<stdio.h>
#include<stdlib.h>
#define N 7
/**
 la funcion que es lo que deberia de tener? 

 - un apuntador en donde digo la posicion en donde se enceuntra el elemento, si es que se enceuntra. 

 - el si va a derecha o izquierda da igual porque para el algoritmos solo existe el pedazo de ese arreglo en ese momento, solo lo debe de saber durante el programa y esde debe de mandar esa delimitacion  

 - guardamos el arreglo real asi como el trozo que vamos a necesitar. 
 */
int search_bin(int *real[], int *trozo[], int inicio, int fin, int num_a_buscar);



int main(void){


    //por ahora no me impota como lleno el arreglo, lo que hare sera 

    int *arreglo[N];
    //recordaar ponermos yo ordenados, despues podemos poner un aglrotimos de ordenamieto, como el quicksort que ya lo tenemos, pero esta en git, fck 
    for(int i=0; i<N; i++){

        printf("posicion [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    int num_buscar; 

    printf("\nnumero a buscad: ");
    scanf("%d", &num_buscar);


    search_bin(arreglo,arreglo,0,N-1,num_buscar);


}


/*

- creo saber como hacer recorrer la lista o el arreglo sin estar guardando en alguna estrucutra, lo que desubri, son varias condiciones 


- el programa divira por la mitad el arreglo. entonces necesitmoa conocer alguno de los 2 lados, esto porque? 

-> porque al moemnto de comparar el dado a buscar y el que encoentramos en la mitad y compraramos se ira a izquerda o derecha y solo necesitmaos conocer el final de ese lado para que no se pase mas alla, 

- cunado lleguemos al final y por ejemplo solo tenemos 2 elementos al lado de la derecha y el numero que bsucamos nos manda a la iquerda quiere decir que no esta y salimos de una porque es acondicion no es posible y viceverda. 


*/

//necesito otro parametro que me diga 
int search_bin(int *real[], int *trozo[], int inicio, int fin, int num_a_buscar){

    //lo que hace la busqueda binaria es dividir el alrgo del arreglo y el indice que este enmedio es el que se compara 


    

    int punto_medio = (fin - inicio) / 2;

    //usemos un arreglo especial para el; 

    int tamanio_trozo = fin - inicio; 

    //int elemento_punto_medio = real[punto_medio];
    const int encoentrado = -1;
    
    int elemento_punto_medio = real[punto_medio];


    /*
    
        a que quiero llegar con esta resta, es con el tamanio del nuevo arreglo, enteonces se que cunado se va del lado izquierdo el numero mas a la derecha es mayor, por lo que seria restar el final - inicio 

        y cunado es a la derecha sera final - inicio
    */

    //siemrep que pasemos el inicio siempre sera mas chico que el fin, siempre este a la derecha o a la izquerda 

    //condiciones de parada, debemos saber si es igual a 1 y no es entonces no esta por lo que vamosnos a salir 

    if((punto_medio <= 1) && (encoentrado == -1)){
        //no enconetro el numero 
        return -1; // no se encoentro el numero, ya que llego al minimo. 
    }

    //lo entonctro 
    else if(elemento_punto_medio == num_a_buscar){
        return punto_medio-1;
    }
    /**
     * 
     * para poder pasar los indices dependeindo cunato van a ir cambinado, como va a hacer sera que si el final cambia le pasamos el punto_medio-1; porque vivmos que el elemento que esta en el punto medio no es entonces nuestro limite sera un elemento antes que el y el inicio esta igual, pero is ahora el inicio cambia o sea ahora va a la derecha ahora sera el punto_medio-1 ahora sera el inicio y el final se mantiene igual. 
     * 
     */

    //el numero a buscar es mas chico se va a la izquerda 
    else if(elemento_punto_medio < num_a_buscar){
        // 

        search_bin(real,trozo,inicio,punto_medio-1,num_a_buscar);
    }



}