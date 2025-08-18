//REALIZAR LA SECUENCIA FIBONACCI CON UNA FUNCION RECURSIVA  PG 143 

#include<stdio.h>

long fibonacci(int n);

int main()
{
    int n, k; 

    do{
        printf("inroduzca el numero de terminos:");
        scanf("%d", &n);
    }while(n <= 1);

    printf("\tSerie de numero de fibonacci");

    printf("0 1");
    for(k=2; k <=n ; k++){
        printf("%ld%c", fibonacci(k), (k %7 ==0? '\n' : ' '));
    }

    return 0;
}


long fibonacci(int n){
    if(n == 0 || n==1){
        return n;
    }
    else{
        return fibonacci(n - 2) + fibonacci(n -1);
    }
}