#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

int main() {
    // Definir una matriz con filas y columnas
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Imprimir los elementos de la esquina
    printf("Esquinas de la matriz:\n");
    printf("Esquina superior izquierda: %d\n", matriz[0][0]);
    printf("Esquina superior derecha: %d\n", matriz[0][COLUMNAS-1]);
    printf("Esquina inferior izquierda: %d\n", matriz[FILAS-1][0]);
    printf("Esquina inferior derecha: %d\n", matriz[FILAS-1][COLUMNAS-1]);

    return 0;
}
