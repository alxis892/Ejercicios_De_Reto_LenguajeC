#include <stdio.h>
#include <stdlib.h> //libreria para gestionar memoria dinamica
#include <time.h>   //funciona para trabajar con numeros de tiempo o fecha

int main() {
    int numeroSecreto, intento, intentosRestantes = 6;
    srand(time(NULL)); // Inicializa la semilla para generar números aleatorios
    numeroSecreto = rand() % 100 + 1; // Genera un número aleatorio entre 1 y 100

    printf("Bienvenido al juego de adivinanzas. He elegido un número entre 1 y 100. ¡Adivina cuál es!\n");

    do {
        printf("Ingresa tu intento (te quedan %d intentos): ", intentosRestantes);
        scanf("%d", &intento);

        if (intento == numeroSecreto) {
            printf("¡Felicidades! ¡Has adivinado el número secreto %d!\n", numeroSecreto);
            break;
        } else if (intento < numeroSecreto) {
            printf("El número secreto es mayor que %d.\n", intento);
        } else {
            printf("El número secreto es menor que %d.\n", intento);
        }

        intentosRestantes--;
    } while (intentosRestantes > 0);

    if (intentosRestantes == 0) {
        printf("¡Oh no! Te has quedado sin intentos. El número secreto era %d. Mejor suerte la próxima vez.\n", numeroSecreto);
    }

    return 0;
}
