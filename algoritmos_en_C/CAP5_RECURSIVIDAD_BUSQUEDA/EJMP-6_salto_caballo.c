#include<stdio.h>
#define N 8
#define n (N+1)

void saltoCaballo(int i, int x, int y, int *exito);
void escribeTablero();

int tablero[n][n];

int d[8][2]= {
                {2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,2},{2,-1}};

int main(){

    int x,y;

    int solucion;
    int i, j;

    do{
        printf("\nCoordenadas inciales del caballo: ");
        scanf("%d %d", &x, &y);


    }while((x < 1) || (x >N) ||
        (y< 1) || (y >N));

    for( i = 1; i<= N; i++){
        for( j = 1; j <=N ; j++){
            tablero[i][j] = 0;
        }
    }
    tablero[x][y] = 1;
    //llamada con coordenadas inciales y primer salto
    
    solucion = 0;
    saltoCaballo(2,x,y,&solucion);

    if(solucion){
        puts("\n\tEl probelma tiene solucion: \n");
        escribeTablero();
    }
    else{
        puts("No se ha enceontrado la solucion al problema!!");
    }

    return 0;
}


void saltoCaballo(int i, int x, int y, int *exito){

    int nx, ny;
    int k;
    *exito = 0;

    k = 0; // inicializa el conjuto de posible de movimientos

    do
    {
        k++;
        nx = x+d[k-1][0];
        ny = y+d[k-1][1];

        if((nx >= 1) && (nx <=N) &&
        (ny >= 1) && (ny <=N) &&
        (tablero[nx][ny] == 0)){
            tablero[nx][ny]= i;

            if(i< N*N){
                saltoCaballo(i+1,nx,ny,exito);

                if(!(*exito)){
                    tablero[nx][ny] = 0;
                }
                else{
                    *exito =1;
                }
            }
        }


    } while ((k < 8) && !(*exito));
}




void escribeTablero(){

    int i,j;

    for(i =1 ;i<=N; i++){
        for(j =1; j<=N; j++){
            printf("%d %c", tablero[i][j], (j< N ? ' ' : '\n'));
        }
    }

}


