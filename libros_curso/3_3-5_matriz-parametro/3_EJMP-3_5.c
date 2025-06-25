//programa que ingresa a un arreglo de tamanio X y funcion que ande la lectura de ese arreglo


//en el ejemplo del libro lo hace mediante <<#define>>, lo que quieere hacer es que el usuario ingrese datos hasta que el usuario crea conveniente, si no sabe realemnte cunatos seran 

#include<stdio.h>
#include<stdlib.h>
#define L 100
//seria leerArray
void ingresar__arreglo(double a);
void imprmirArray(double a);



int main(void){

    double *a[L];
    ///para el tamanio igual podemos usar sizeof
    ingresar__arreglo(a); //pasamos la direccion 
    printf("elementos del arreglo son: ");
    imprmirArray(a);

}


void ingresar__arreglo(double a){

    int n=0;

    puts("ingrese datos, para terminal ingresar 0\n");

    for(; n< L ; n++){

        printf("posicion [%d] : ", n);
        scanf("%f", &a[n]);

        if(a[n] == 0) break;
    }
}


void imprmirArray(double a){


    //ste slo imprimiera el tamanio que es, seria con for o con while, 
    int i=0;
    while(a[i] != 0){

        printf("\t%d : %1f\n", i, &a[i]);
        i++;
    }
}
