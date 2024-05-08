#include <stdio.h>

// calcular el promedio de elementos solicitados de un arreglo

#define LONGITUD_ARREGLO 5

int main() {
    int arreglo[LONGITUD_ARREGLO], suma = 0;

    printf("Ingresa %d numeros enteros:\n", LONGITUD_ARREGLO);
    for (int i = 0; i < LONGITUD_ARREGLO; i++) {
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("El promedio de los numeros ingresados es: %.2f\n", (float)suma / LONGITUD_ARREGLO);

    return 0;
}
