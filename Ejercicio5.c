#include <stdio.h>

#define N 2

// Funcion para calcular el determinante de una matriz 2x2
float determinante(float matriz[N][N]) {
    return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

// Funcion para calcular la matriz inversa de una matriz 2x2
void inversa(float matriz[N][N], float inversa[N][N]) {
    float det = determinante(matriz);
    if (det == 0) {
        printf("La matriz no tiene inversa (determinante es cero).\n");
        return;
    }
    
    // Calcular la matriz inversa usando la fórmula para 2x2
    inversa[0][0] = matriz[1][1] / det;
    inversa[0][1] = -matriz[0][1] / det;
    inversa[1][0] = -matriz[1][0] / det;
    inversa[1][1] = matriz[0][0] / det;
}

// Funcion para imprimir una matriz 2x2
void imprimirMatriz(float matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Definir una matriz 2x2
    float matriz[N][N] = {
        {4, 3},
        {2, 1}
    };

    float inversaMatriz[N][N];

    // Calcular la inversa de la matriz
    inversa(matriz, inversaMatriz);

    // Imprimir la matriz inversa
    printf("Matriz inversa:\n");
    imprimirMatriz(inversaMatriz);

    return 0;
}
