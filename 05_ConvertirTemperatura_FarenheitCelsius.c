#include <stdio.h>

int main() {
    char opcion;
    float temperatura, resultado;

    // Solicitar al usuario que elija la conversión que desea realizar
    printf("Celsius a Fahrenheit (C) o de Fahrenheit a Celsius (F) \n");
    printf("Ingrese C o F:");
    scanf(" %c", &opcion);

    // Verificar la opción ingresada por el usuario y realizar la conversión correspondiente
    if (opcion == 'C' || opcion == 'c') {
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%f", &temperatura);
        resultado = (temperatura * 9 / 5) + 32; // Convertir de Celsius a Fahrenheit
        printf("La temperatura equivalente en Fahrenheit es: %.2f\n", resultado);
    } else if (opcion == 'F' || opcion == 'f') {
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = (temperatura - 32) * 5 / 9; // Convertir de Fahrenheit a Celsius
        printf("La temperatura equivalente en Celsius es: %.2f\n", resultado);
    } else {
        printf("Opción no válida. Por favor ingrese C o F.\n");
    }

    return 0;
}
