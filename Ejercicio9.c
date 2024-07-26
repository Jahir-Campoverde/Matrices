#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

// Funcion para sumar dos matrices
void sumarMatrices(int A[FILAS][COLUMNAS], int B[FILAS][COLUMNAS], int C[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            C[i][j] = A[i][j] + B[i][j];
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
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int B[FILAS][COLUMNAS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[FILAS][COLUMNAS]; // Matriz para almacenar el resultado de la suma

    // Sumar las matrices
    sumarMatrices(A, B, C);

    // Imprimir las matrices
    printf("Matriz A:\n");
    imprimirMatriz(A);

    printf("Matriz B:\n");
    imprimirMatriz(B);

    printf("Matriz A + B:\n");
    imprimirMatriz(C);

    return 0;
}
