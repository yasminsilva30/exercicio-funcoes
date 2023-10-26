#include<stdio.h>

void trocarLinha2ComLinha8(int matriz[10][10]){
    int auxiliar;
    
    for(int i = 0; i < 10; i++){
        auxiliar = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = auxiliar;
    }
}


void trocarColuna4ComDoluna10(int matriz[10][10]){
    int auxiliar;
    
    for(int i = 0; i < 10; i++){
        auxiliar = matriz[i][4];
        matriz[i][4] = matriz[i][9];
        matriz[i][9] = auxiliar;
    }
}

void trocarDiagonais(int matriz[10][10]){
    int auxiliar;
    
    for(int i = 0; i < 10; i++){
        auxiliar = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = auxiliar;
    }
}

void trocarColuna5ComDoluna10(int matriz[10][10]){
    int auxiliar;
    
    for(int i = 0; i < 10; i++){
        auxiliar = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = auxiliar;
    }
}

void imprimirMatriz(int matriz[10][10]){

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }

    }

}

main() {
    int matriz[10][10];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            matriz[i][j] = i * 10 + j;
        }
    }

    imprimirMatriz(matriz);
    //trocarLinha2comLinha8(matriz);
    //imprimirMatriz(matriz);
    //trocarColuna4comColuna10(matriz);
    //trocarDiagonais(matriz);
    trocarColuna5ComDoluna10(matriz);
    imprimirMatriz(matriz);

}