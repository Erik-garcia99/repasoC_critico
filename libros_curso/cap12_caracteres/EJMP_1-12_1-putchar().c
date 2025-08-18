/*
El siguiente programa hace «eco>> delpujo de entrada y convierte las palabras en palabras iguales que 
comienzan con letra mayúscula. Es decir, si la entrada es "poblado de peñas rubias" se ha de 
convertir en "Poblado De Peñas Rubias". Para realizar esa operación se recurre a la función 
toupper (car) que devuelve el equivalente mayúscula de car si car es una letra minúscula. El archivo 
de cabecera necesario para poder utilizar la función toupper (car) es <ctype . h>.


*/


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

    char car, pre = '\n';

    while((car=getchar()) !=EOF){

        if(pre == ' ' || pre == '\n')
            putchar(toupper(car));

        else{
            putchar(car);
        }

        pre = car;
    }

    return 0;

}