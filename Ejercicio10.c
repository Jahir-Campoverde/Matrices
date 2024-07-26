#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

// Funcion para restar dos matrices
void restarMatrices(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int C[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            C[i][j] = A[i][j] - B[i][j];
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
    // Definir dos matrices 3x3
    int A[FILAS][COLUMNAS] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    
    int B[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int C[FILAS][COLUMNAS]; // Matriz para almacenar el resultado de la resta

    // Restar las matrices
    restarMatrices(A, B, C);

    // Imprimir las matrices
    printf("Matriz A:\n");
    imprimirMatriz(A);

    printf("Matriz B:\n");
    imprimirMatriz(B);

    printf("Matriz A - B:\n");
    imprimirMatriz(C);

    return 0;
}
