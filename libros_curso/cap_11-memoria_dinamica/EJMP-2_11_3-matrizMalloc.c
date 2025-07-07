//matriz de n filas ya cada fila de un numero varibal de elemeneo 

#include<stdio.h>
#include<stdlib.h>


int main(void){


    int **p;
    int n,m;

    do{
        printf("\n numero de filas: ");
        scanf("%d", &n);
    }while(n <=0);

    p = (int **)malloc(n*sizeof(int*));

    for(int i=0; i< n; i++){


        printf("numero de elemtnos de fila %d", i+1);
        scanf("%d", &m);
        p[i]=(int*)malloc(m*sizeof(int));

        for(int j=0; j<m;j++){

            scanf("%d", &p[i][j]);

        }
    }

}