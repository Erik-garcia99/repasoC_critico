//implementacion con arreglo

#include<stdio.h>


int longitud(const char cad[]);


int main(){
    static char cad[] = "universidad autonoma de baja california ";

    printf("la longitud de %s es %d caracteres\n",cad, longitud(cad));



    return 0;
}

int longitud(const char cad[]){


    int posicion = 0; 

    while(cad[posicion] != '\0'){
        posicion++;
    }

    return posicion;

}

