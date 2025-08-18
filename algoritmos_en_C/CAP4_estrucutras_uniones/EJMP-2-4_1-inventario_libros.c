//crear un array de 100 elemenso de inventario de libros 

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


struct inventario{
    char titulo[25];
    char fecha_pub[20];
    char autor[30];
    int num;
    int pedido;
    float precio_venta;
};


int main(){


    struct inventario libro[100];

    int total=0;
    char resp, b[21];

    do{
        printf("total libros %d \n",(total + 1));
        printf("cual es el titulo? : ");
        gets(libro[total].titulo);

        printf("cual es la fecha de publicacion: ");
        gets(libro[total].fecha_pub);

        printf("quien es el autro? ");
        gets(libro[total].autor);

        printf("cuantos libros existen?");
        scanf("%d",&libro[total].num);

        printf("cuantos ejemplaros existen pedidos?");
        scanf("%d", &libro[total].pedido);

        printf("cual es el precio de venta?: ");
        gets(b);

        libro[total].precio_venta= atof(b); //conversion a real
        fflush(stdin); //limaar el buffer

        printf("\nhay mas libros (S/N)?");
        scanf("%c", &resp);

        fflush(stdin);

        resp=toupper(resp);

        //convertir a maysuculas

        if(resp =='S'){
            total++;
            continue;
        }
    }while(resp == 'S');
    return 0;

}






