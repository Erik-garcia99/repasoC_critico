#include<stdio.h>

//prototipos de funcione 

double inversos(int k);
double cuadrados(int k);

double funcsuma(int n, double (*f)(int k));


int main(){

    printf("suma de cinco inverssos: %.3lf \n",funcsuma(5, inversos));

    printf("suma de 3 cuadrados : %.3lf", funcsuma(3,cuadrados));

}

double funcsuma(int n, double (*f)(int k)){
    double s= 0;

    int i;
    for(i = 0; i<=n ; i++){
        s +=f(i);
    }

    return s;
}

double inversos(int k){
    return 1.0/k;
}

double cuadrados(int k){
    return (double)k*k;
}