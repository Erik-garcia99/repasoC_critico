/*
ejercicio -  

El programa define cuatros funciones: sumar ( ) , restar ( ) , mult ( ) y div( ) , y un array de 
punteros a función que se inicializa a cada una de las funciones. Se pide la operación a realizar, se 
busca el índice del puntero a función que le corresponde (dependiendo del operador) y se realiza la 
llamada a la función con su puntero. 


*/


#include<stdio.h>

//prototipo de funciones 

float sumar(float x, float y);
float restar(float x, float y);
float mult(float x, float y);
float div(float x, float y);


void main(){


    char signo, operadores[] = {'+', '-','/','*'};

    float(*func[])(float, float) = {sumar, restar, mult, div};

    int i;
    unsigned char t;
    float x, y;

    puts("\ncalculador de expresiones");

    do{

        printf("\nExpresion: ");

        scanf("%f %c %f", &x, &signo,&y);

        //busqueda del operador

        for(i = 0; i < 4; i++){

            if(signo == operadores[i]){
                printf("\n%.1f %c %.1f = %.2f", x, signo, y, func[i](x,y));
            }
        }


    }while(t == 's');


}

float sumar(float x, float y){

    return x + y;

}


float restar(float x, float y){


    return x - y;
}
float mult(float x, float y){

    return x * y;
}
float div(float x, float y){

    return x / y;
}




