#include <stdio.h>
//impresion de tabla de multiplicaciones de un numero.

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número para generar la tabla de multiplicación
    printf("Ingrese un número para generar su tabla de multiplicación: ");
    scanf("%d", &numero);

    // Imprimir la tabla de multiplicación utilizando un ciclo for
    printf("Tabla de multiplicación para %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
