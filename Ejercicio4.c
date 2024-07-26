#include <stdio.h>

#define FILAS 4
#define COLUMNAS 5

int main() {
    // Definir una matriz con filas y columnas
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    // Imprimir los elementos que no están en las esquinas
    printf("Elementos que no estan en las esquinas de la matriz:\n");

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            // Comprobar si el elemento esta en una esquina
            if (!((i == 0 && j == 0) || // esquina superior izquierda
                  (i == 0 && j == COLUMNAS - 1) || // esquina superior derecha
                  (i == FILAS - 1 && j == 0) || // esquina inferior izquierda
                  (i == FILAS - 1 && j == COLUMNAS - 1))) { // esquina inferior derecha
                printf("Elemento en (%d, %d): %d\n", i, j, matriz[i][j]);
            }
        }
    }

    return 0;
}
