// ejemplo de la pg 356

// este programa convierte cualquier caracter minuscula en maysuucal

#include <stdio.h>
#include <conio.h>

void main()
{
    char *p;
    char cadenaTexto[81];

    puts("introduzca cadena a convertir");
    gets(cadenaTexto);

    // apuntar al primer caracter de la cadena

    p = &cadenaTexto[0]; // pasamos la direccion de la primera posicion de la cadena que se ingreso

    while (*p)
    {

        if ((*p >= 'a') && (*p <= 'z'))
        {

            char aux = *p;
            aux -= 32; // se le resta 32 para minuscula e codio ascii
            *p = aux;
            *p++;
        }
        else
        {
            *p++;
        }
    }

    puts("la candea convertida es: ");
    puts(cadenaTexto);

    puts("\npulse intro ara continuar");
    getch(); // utilizar la liberbia conio.
}