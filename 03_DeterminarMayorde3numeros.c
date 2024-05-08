// Determinar el mayor de 3 numeros

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar al usuario ingresar tres números
    printf("Ingrese tres números separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Comprobar cuál es el mayor número
    if (num1 >= num2 && num1 >= num3) {
        printf("%d es el mayor número.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d es el mayor número.\n", num2);
    } else {
        printf("%d es el mayor número.\n", num3);
    }

    return 0;
}
