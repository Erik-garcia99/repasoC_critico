/*
primre ejemplo usando arreglos simples
*/

#include <stdio.h>

int longitud(const char cad[]);

void main()
{
    static char cad[] = "universidad autonoma de baja california";

    printf("\nla longitud de %s es %d caracteres\n", cad, longitud(cad));
}

int longitud(const char cad[])
{
    int posicion = 0;

    while (cad[posicion] != '\0')
    {
        posicion++;
    }

    return posicion;
}