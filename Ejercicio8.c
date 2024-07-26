#include <stdio.h>

#define FILAS 4
#define COLUMNAS 5

int main() {
    // Definir una matriz con dimensiones especificas
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    // Imprimir las dimensiones de la matriz
    printf("Numero de filas: %d\n", FILAS);
    printf("Numero de columnas: %d\n", COLUMNAS);

    return 0;
}
