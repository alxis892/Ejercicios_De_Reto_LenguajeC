#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void calcularTranspuesta(int matriz[FILAS][COLUMNAS], int transpuesta[COLUMNAS][FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[FILAS][COLUMNAS];
    
    printf("Ingrese los elementos de la matriz %dx%d:\n", FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Elemento en la posición (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int transpuesta[COLUMNAS][FILAS];

    printf("\nMatriz original:\n");
    mostrarMatriz(matriz);

    calcularTranspuesta(matriz, transpuesta);

    printf("\nMatriz transpuesta:\n");
    mostrarMatriz(transpuesta);

    return 0;
}
