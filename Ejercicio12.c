#include <stdio.h>

#define TAMANO 2

// Funcion para calcular la inversa de una matriz 2x2
int invertirMatriz2x2(float A[TAMANO][TAMANO], float A_inv[TAMANO][TAMANO]) {
    float determinante = A[0][0] * A[1][1] - A[0][1] * A[1][0];

    // Verificar si el determinante es cero
    if (determinante == 0) {
        printf("La matriz no es invertible (determinante es cero).\n");
        return 0; // La matriz no es invertible
    }

    // Calcular la matriz inversa
    float inv_determinante = 1.0 / determinante;
    A_inv[0][0] = A[1][1] * inv_determinante;
    A_inv[0][1] = -A[0][1] * inv_determinante;
    A_inv[1][0] = -A[1][0] * inv_determinante;
    A_inv[1][1] = A[0][0] * inv_determinante;

    return 1; // Exito
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

// Funcion para multiplicar matrices 2x2
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

int main() {
    // Definir una matriz 2x2
    float A[TAMANO][TAMANO] = {
        {4, 7},
        {2, 6}
    };

    float A_inv[TAMANO][TAMANO];
    float B[TAMANO][TAMANO] = {
        {1, 0},
        {0, 1}
    };
    float resultado[TAMANO][TAMANO];

    // Calcular la inversa de la matriz A
    if (invertirMatriz2x2(A, A_inv)) {
        // Imprimir la matriz original
        printf("Matriz A:\n");
        imprimirMatriz2x2(A);

        // Imprimir la matriz inversa
        printf("Matriz A inversa:\n");
        imprimirMatriz2x2(A_inv);

        // Multiplicar la matriz inversa por B
        multiplicarMatrices2x2(A_inv, B, resultado);

        // Imprimir el resultado
        printf("Resultado de A^-1 * B:\n");
        imprimirMatriz2x2(resultado);
    }

    return 0;
}
