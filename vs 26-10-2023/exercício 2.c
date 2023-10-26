#include<stdio.h>
#include<stdlib.h>

int locacoesGratuitas(int vetor[500], int filmesGratis[500]) {
    
    for (int i = 0; i < 500; i++) {
        filmesGratis[i] = vetor[i]/15;
    }
}

main() {

    int A[500];
    int filmesGratis[500];

    for (int i = 0; i < 500; i++) {
        A[i] = rand() % 100 + 1;
    }

    locacoesGratuitas(A, filmesGratis);

    for (int i = 0; i < 500; i++) {
        printf("O cliente[%d] alugou um total de %d e pode retirar %d gratuitos", i, A[i], filmesGratis[i]);
    }

}
