#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

int main() {
    int matriz1[FILAS][COLUMNAS], matriz2[FILAS][COLUMNAS], suma[FILAS][COLUMNAS];
    int i, j;

    // Pedir al usuario ingresar los elementos de la primera matriz
    printf("Ingresa los elementos de la primera matriz:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Pedir al usuario ingresar los elementos de la segunda matriz
    printf("\nIngresa los elementos de la segunda matriz:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Realizar la suma de las matrices
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            suma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Imprimir la matriz resultante (suma)
    printf("\nLa suma de las matrices es:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d ", suma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
