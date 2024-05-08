#include <stdio.h>

//operaciones artimeticas usando numeros enteros

int main() {
    int num1, num2, resultado;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    // Realizar la operación aritmética (suma), 
    // Se puede cambiar la + por (/,-,*) (division, resta y multiplicación) tan solo cambiando el signo.
    resultado = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}
