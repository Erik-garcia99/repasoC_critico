// este seguno programa utiliza punteros para contar los caracteres dentro de la cadena.

#include <stdio.h>

int longitud(const char *);

int main()
{

    static char cad[] = "universidad autonoma de baja california ";

    printf("la longitud de %s es de %d caracteres\n", cad, longitud(cad));

    return 0;
}

int longitud(const char *cad)
{

    int cuenta = 0;

    while (*cad++)
        cuenta++;
    return cuenta;
}