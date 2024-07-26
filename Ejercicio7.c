#include <stdio.h>

#define N 3

// Funcion para construir una matriz simetrica a partir de una matriz dada
void generarSimetrica(int matriz[N][N], int simetrica[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) {
                // Copiar el elemento de la matriz original a la matriz simetrica
                simetrica[i][j] = matriz[i][j];
                // Asegurarse de que la matriz sea simetrica
                simetrica[j][i] = matriz[i][j];
            }
        }
    }
}

// Funcion para imprimir una matriz
void imprimirMatriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Definir una matriz 3x3 con valores iniciales
    int matriz[N][N] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    int matrizSimetrica[N][N];

    // Generar la matriz simetrica
    generarSimetrica(matriz, matrizSimetrica);

    // Imprimir la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    // Imprimir la matriz simetrica
    printf("Matriz simétrica:\n");
    imprimirMatriz(matrizSimetrica);

    return 0;
}
