#include <stdio.h>

//Mi primera calculadora

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicitar al usuario que ingrese el operador y los dos números
    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

    // Realizar la operación aritmética
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Comprobar división por cero
            if(num2 != 0)
                resultado = num1 / num2;
            else {
                printf("Error: No se puede dividir entre cero.\n");
                return 1; // Salir del programa con código de error
            }
            break;
        default:
            printf("Operador no válido.\n");
            return 1; // Salir del programa con código de error
    }

    // Mostrar el resultado
    printf("El resultado de %.2lf %c %.2lf es: %.2lf\n", num1, operador, num2, resultado);

    return 0;
}
