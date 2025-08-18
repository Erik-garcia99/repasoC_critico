//ejemplo 4.5 PG 1

#include<stdio.h>
#include<stdlib.h>

struct info_persona
{
    char nombre[20];
    char calle[30];
    char ciudad[25];
    char provincia[25];
    char codigopostal[6];
};


//prototipo  de funciones 

void entradaPersona(struct info_persona *pp);
void verInfoPersona(struct info_persona p);

//degine variable de tipo estrcutra 

struct info_persona reg_dat;

//pasa por referecnia la varibale 

entradaPersona(&reg_dat);

verInfoPersona(reg_dat);





