#include <stdio.h>

//utilizacion de funciones y sentencias de decisiones
// Función para calcular el factorial basica
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("\t\t\tCalculadora de Factorial\n");
    // Solicitar al usuario que ingrese un número
    printf("\tIngrese un número : ");
    scanf("%d", &num);

    // Calcular el factorial e imprimir el resultado
    printf("El factorial de %d es %d\n", num, factorial(num));

    return 0;
}
