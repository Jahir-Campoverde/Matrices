#include <stdio.h>

#define FILAS_A 3
#define COLUMNAS_A 2
#define FILAS_B 2
#define COLUMNAS_B 3

// Funcion para multiplicar dos matrices
void multiplicarMatrices(int A[FILAS_A][COLUMNAS_A], int B[FILAS_B][COLUMNAS_B], int C[FILAS_A][COLUMNAS_B]) {
    // Verificar que las matrices se puedan multiplicar
    if (COLUMNAS_A != FILAS_B) {
        printf("Error: Las matrices no se pueden multiplicar.\n");
        return;
    }

    for (int i = 0; i < FILAS_A; i++) {
        for (int j = 0; j < COLUMNAS_B; j++) {
            C[i][j] = 0; // Inicializar el elemento C[i][j]
            for (int k = 0; k < COLUMNAS_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Funcion para imprimir una matriz
void imprimirMatriz(int matriz[FILAS_A][COLUMNAS_B]) {
    for (int i = 0; i < FILAS_A; i++) {
        for (int j = 0; j < COLUMNAS_B; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Definir matrices A (3x2) y B (2x3)
    int A[FILAS_A][COLUMNAS_A] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    int B[FILAS_B][COLUMNAS_B] = {
        {7, 8, 9},
        {10, 11, 12}
    };

    int C[FILAS_A][COLUMNAS_B]; // Matriz para almacenar el resultado de la multiplicacion

    // Multiplicar las matrices
    multiplicarMatrices(A, B, C);

    // Imprimir las matrices
    printf("Matriz A:\n");
    for (int i = 0; i < FILAS_A; i++) {
        for (int j = 0; j < COLUMNAS_A; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");
    for (int i = 0; i < FILAS_B; i++) {
        for (int j = 0; j < COLUMNAS_B; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Matriz A * B:\n");
    imprimirMatriz(C);

    return 0;
}
