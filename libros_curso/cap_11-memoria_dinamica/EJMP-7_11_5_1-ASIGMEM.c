#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define S 10
#define NUM 99

struct array{

    int *v; //puntero al arreglo
    int n; //numero de elementos del arreglo 

};

typedef struct array vector; 
void gen_array(vector *inic); //genrear arreglo con n valores
void nuevo_array(vector inic, vector * nd); //genrea nuevo vector sin duplicados 


void escribe_array(vector w);

int main(){


    vector prim, dest; 

    do{

        printf("\nNumero de elemetnos del array: ");
        scanf("%d", &prim.n);
    }while(prim.n < 1);

    //se gener un numero de arreglo de nuemros aleatorio 

    int num = prim.n;

    gen_array(&prim);

    escribe_array(prim);

    nuevo_array(prim, &dest);
    escribe_array(dest);

    /*for(int i = 0; i< num ; i++){

        int randm = rand()/10;


    }*/


}


void gen_array(vector *inic){

    int k; 

    inic->v = (int*)calloc(inic->n,sizeof(int)); //reserva memoria 

    //genrea valores randoms 
    for(k = 0; k < inic->n; k++){
        inic->v[k] = (rand()% 10) *10;
    }

}

void escribe_array(vector w){
    int k; 

    printf("\n\t valres que conteien el vector\n");

    for(k = 0; k < w.n;k++){

        printf("%d%c", w.v[k], (k+1)%19 == 0 ? '\n':' '); //cada 19 enteros salta una linea 
    }
}


void nuevo_array(vector inic, vector * nd){


    int k, tam; 

    //reservar incial de meoria para 10 valores 

    nd->v = NULL;

    tam = sizeof(int) *S;

    nd->v= (int*)realloc(nd->v, tam);
    //copia el primer elementos 

    nd->v[0] = inic.v[0];
    nd->n = 1;

    //copia las demos elemtnos si no estan ya en el arreglo, cuenta los elemntos copiados para resrevar memoria 

    for(k = 1; k< inic.n; k++){

        int j, dup; 

        j=dup = 0; 

        while((j<nd->n) && !dup){
            dup = inic.v[k] == nd->v[j++];
        }

        if(!dup){


            if(nd->n%S ==0){ //ampliar memoria

                tam += sizeof(int) *S;
                nd->v =(int*)realloc(nd->v, tam);
            }
            
            nd->v[nd->n++] = inic.v[k];
        } 
    }
   
}




