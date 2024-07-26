#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

// Funcion para calcular la matriz transpuesta
void transpuesta(int matriz[FILAS][COLUMNAS], int transpuesta[COLUMNAS][FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

// Funcion para imprimir una matriz
void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Definir una matriz 3x3
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizTranspuesta[COLUMNAS][FILAS];

    // Calcular la matriz transpuesta
    transpuesta(matriz, matrizTranspuesta);

    // Imprimir la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    // Imprimir la matriz transpuesta
    printf("Matriz transpuesta:\n");
    imprimirMatriz(matrizTranspuesta);

    return 0;
}
