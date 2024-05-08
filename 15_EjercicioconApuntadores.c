#include <stdio.h>

//cambio de datos en variables utilizando apuntadores
void intercambiar(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    intercambiar(&num1, &num2);

    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
