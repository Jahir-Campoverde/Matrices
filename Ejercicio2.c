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

    // Imprimir los elementos pares de la matriz
    printf("Elementos pares de la matriz:\n");
    
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("Elemento en (%d, %d): %d\n", i, j, matriz[i][j]);
            }
        }
    }

    return 0;
}
