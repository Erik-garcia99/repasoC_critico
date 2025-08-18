/*
ejercicio 4.1 PG 118 

se desea rsirar una estrucutra <<perosnaEmpleado>> que se desa registrar los datos de una persona que tenga los datos de la fecha de nacimiento, 

define una funcion para dar entrada a los datos de la estrcuutra y otra funcion para dar salida de los datos de una estrucura de perosna, 

estructras 

personaEmpleado

persona 

fecha 


*/

#include<stdio.h>



struct fecha
{
    unsigned int dia, mes, anio;
};

struct persona{
    char nombre[20];
    unsigned int edad;
    int altura;
    int peso;
    struct fecha fec;
};


struct personaEmpleado
{
    struct persona unapersona;
    unsigned int salario;
    unsigned int horas_por_semana;
};

//protopiyo de funciones. 

void entrada(struct personaEmpleado *p);
void muestra(struct personaEmpleado up);


void main(void){


    struct personaEmpleado p;

    entrada(&p);

    muestra(p);

}


void entrada(struct personaEmpleado *p){



    printf("\nintroduzca su nombre: ");
    gets(p->unapersona.nombre);

    printf("introduzca su edad: ");
    scanf("%d", &p->unapersona.edad);

    printf("introduza su altura: ");
    scanf("%d", &p->unapersona.altura);

    printf("introduza su peso:");
    scanf("%d",&p->unapersona.peso);

    printf("introduza su fecha de nacimeinto: ");
    scanf("%d %d %d", &p->unapersona.fec.dia,
                        &p->unapersona.fec.mes,
                        &p->unapersona.fec.anio);
    
    printf("introduza su salario: ");
    scanf("%d", &p->salario);

    printf("introduza numero de horas:");
    scanf("%d", &p->horas_por_semana);
}



void muestra(struct personaEmpleado up){

    puts("\n\ndatos de un empleado: ");
    puts("\n\n\t ------ -- -- ---------");

    printf("Nombre: %s\n", up.unapersona.nombre);

    printf("edad: %d \n",up.unapersona.edad);

    printf("fecha de naciemnto %d-%d-%d\n", up.unapersona.fec.dia,up.unapersona.fec.mes, up.unapersona.fec.anio);

    printf("altrua: %d \n", up.unapersona.altura);
    printf("peso: %d\n", up.unapersona.peso);
    printf("numero de horas: %d \n", up.horas_por_semana);  




}
