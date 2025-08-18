//calcular el maximo comun divisor con recurusividad 

#include<stdio.h>

int mcd(int m, int n);

int main(){


    int m, n;

    do{
        printf("introduzca dos enteros positivos: ");
        scanf("%d %d", &m, &n);

    }while((n <= 0) || (m <=0));
    printf("\nel maximo comun divisor es %d: ", mcd(m,n));
}


int mcd(int m, int n){
    if(n <=m && m%n == 0){
        return n;
    }
    else if(m < n){
        return mcd(n,m);
    }
    else{
        return mcd(n, m%n);
    }
}








