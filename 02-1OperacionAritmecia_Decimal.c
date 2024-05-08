#include <stdio.h>

//operaciones artimeticas usando decimales

int main() {
    double num1, num2, resultado;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);

    // Realizar la operación aritmética (suma), 
    // Se puede cambiar la + por (/,-,*) (division, resta y multiplicación) tan solo cambiando el signo.
    resultado = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, resultado);

    return 0;
}
