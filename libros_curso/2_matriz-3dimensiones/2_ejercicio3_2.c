#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 8

void genMat(int a[][N], int n);
int siimetrica(int a[][N], int n);
void escribeMat(int a[][N], int n);



int main(void){


    int a[N][N];
    int n, i, j;

    int esSim;
    randomsize();

    do{
        printf("\ntamanio de cada demsnion de la matriz, maximo %d", N);
        scanf("%d",&n);


    }while(n<2 && n>N);


    do{
        getMat(a,n);
        esSim = siimetrica(a,n);

        if(esSim){
            printf("\n Econtada matriz simetrica\n");
        }
    }while(!esSim);


}


void genMat(int a[][N], int n){


    int i,j; 

    for(i = 0; i< n; i++){
        for(j = 0 ; j<n;j++){
            a[i][j] = random(N);
        }
    }

}

int siimetrica(int a[][N], int n){


    int i,j; 
    int esSimetrica; 

    for(esSimetrica =1, i=0 ; i<n-1 && esSimetrica; i++){
        for(j=i+1 ; j<n && esSimetrica; j++){
            if(a[i][j] != a[j][i]){
                esSimetrica = 0;
            }
            return esSimetrica;
        }
    }


}


void escribeMat(int a[][N], int n){

    int i,j;

    printf("\tMatriz analizada");
    printf("------------------");

    for( i = 0; i<n ; i++){
        putchar("\t");
        for(j=0; i<n; j++){
            printf("%d %c",a[i][j], (j==n-1 ? '\n ':' '));
        }
    }


}