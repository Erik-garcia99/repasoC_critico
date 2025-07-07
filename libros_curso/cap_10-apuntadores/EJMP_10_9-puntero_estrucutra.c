
/*
En este ejemplo se declara el tipo estructura t-persona, que se asocia con el tipo persona para 
facilidad de escritura. Un array de esta estructura se iniciali7a con campos al azar y se muestran por 
pantalla.
*/

#include<stdio.h>


struct t_persona {
    char nombre[30];
    int edad;
    int altura;
    int peso;
};

typedef struct t_persona persona;


void mostrar_persona(persona *ptr);


void main(){
    int i;

    persona empleados[] = { {"Morti, pepe", 47, 182, 85},
                            {"garcia, luis", 39, 170, 75},
                            {"jimenez", 18, 175, 80}

                            };


    persona *p;

    p = empleados;


    for(i = 0; i< 3; i++, p++){
        mostrar_persona(p);
    }

}


void mostrar_persona(persona *ptr){


    printf("\nNombre: %s", ptr->nombre);
    printf("\tedad: %d", ptr->edad);
    printf("\taltrua: %d", ptr->altura);
    printf("\tpeso: %d\n", ptr->peso);

}







