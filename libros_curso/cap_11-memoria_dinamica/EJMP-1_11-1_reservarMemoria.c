#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){


    char cad[121], *ptr;
    int lon;

    puts("\nIntroduce una linea de texto\n");
    gets(cad);

    lon= strlen(cad);

    ptr = (char*)malloc((lon+1)*sizeof(char));

    strcpy(ptr, cad);

    printf("ptr = %s", ptr);
    free(ptr);

}