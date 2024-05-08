#include <stdio.h>

// Función para verificar si un número es primo dentro de un rango de numeros
int esPrimo(int numero) {
    if (numero <= 1) {
        return 0; // Los números menores o iguales a 1 no son primos
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Si el número es divisible por algún número entre 2 y la raíz cuadrada de número, no es primo
        }
    }
    return 1; // Si no se encontró ningún divisor, el número es primo
}

int main() {
    int inicio, fin;

    // Solicitar al usuario el rango de números
    printf("Ingrese el inicio del rango: ");
    scanf("%d", &inicio);
    printf("Ingrese el fin del rango: ");
    scanf("%d", &fin);

    // Mostrar los números primos en el rango dado
    printf("Los numeros primos en el rango [%d, %d] son:\n", inicio, fin);
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
