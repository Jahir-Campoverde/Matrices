#include <stdio.h>

#define TAMANO 2

// Funcion para multiplicar dos matrices 2x2
void multiplicarMatrices2x2(float A[TAMANO][TAMANO], float B[TAMANO][TAMANO], float C[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            C[i][j] = 0;
            for (int k = 0; k < TAMANO; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Funcion para elevar una matriz 2x2 a la potencia k
void potenciaMatriz2x2(float A[TAMANO][TAMANO], int k, float resultado[TAMANO][TAMANO]) {
    // Inicializar el resultado como la matriz identidad
    float identidad[TAMANO][TAMANO] = {
        {1, 0},
        {0, 1}
    };

    // Copiar la matriz A a resultado
    float temp[TAMANO][TAMANO];
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            resultado[i][j] = A[i][j];
        }
    }

    // Multiplicar la matriz por si misma k-1 veces
    for (int i = 1; i < k; i++) {
        multiplicarMatrices2x2(resultado, A, temp);
        for (int j = 0; j < TAMANO; j++) {
            for (int l = 0; l < TAMANO; l++) {
                resultado[j][l] = temp[j][l];
            }
        }
    }
}

// Funcion para imprimir una matriz 2x2
void imprimirMatriz2x2(float matriz[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; i++) {
        for (int j = 0; j < TAMANO; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Definir una matriz 2x2
    float A[TAMANO][TAMANO] = {
        {2, 1},
        {1, 2}
    };

    float resultado[TAMANO][TAMANO];
    int k = 3; // Potencia a la que se elevara la matriz

    // Elevar la matriz a la potencia k
    potenciaMatriz2x2(A, k, resultado);

    // Imprimir la matriz original y el resultado
    printf("Matriz A:\n");
    imprimirMatriz2x2(A);

    printf("Matriz A^%d:\n", k);
    imprimirMatriz2x2(resultado);

    return 0;
}
