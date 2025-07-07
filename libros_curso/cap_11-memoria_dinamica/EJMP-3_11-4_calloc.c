#include<stdio.h>
#include<stdlib.h>

int main(void){

    float *pf =NULL; 

    int num, i; 

    do{
        printf("nuemero de elemnto del vector:");
        scanf("%d", &num);
    }while(num < 1);

    //asignar memoria, num*tamaniobytes

    pf = (float *)calloc(num, sizeof(float));

    if(pf ==NULL){
        puts("error de asginacion de memoria ");
        return 1;
    }

    printf("introduce %d valores: ", num);
    for(i=0; i< num; i++){
        scanf("%f", &pf[i]);
    }

    //libreacion
    free(pf);


}