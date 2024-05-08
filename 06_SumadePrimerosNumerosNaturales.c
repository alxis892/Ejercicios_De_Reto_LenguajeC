#include <stdio.h>

int main() {
    int n;
    int suma = 0;

    // Solicitar al usuario ingresar el valor de N
    printf("\n!!!solo numeros positivos!!! \n");
    printf("Ingrese un numero natural: ");
    scanf("%d", &n);

    // Calcular la suma de los primeros N números naturales utilizando un ciclo for
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    // Mostrar el resultado
    printf("La suma de los primeros %d números naturales es: %d\n", n, suma);

    return 0;
}
