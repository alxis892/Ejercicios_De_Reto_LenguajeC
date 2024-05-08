#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, siguiente;

    printf("Ingrese el número de términos de la secuencia de Fibonacci que desea generar: ");
    scanf("%d", &n);

    printf("Secuencia de Fibonacci hasta el término %d:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
    }
    printf("\n");

    return 0;
}
