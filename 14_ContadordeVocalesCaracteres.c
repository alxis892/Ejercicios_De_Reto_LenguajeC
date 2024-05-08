#include <stdio.h> //libreria enbtrada y salida de datos
#include <ctype.h>  // libreria utilizada para operaciones basicas con caracteres

//programa para contar las vocales y consonantes de una cadena de caracteres
int main() {
    char cadena[100];
    int vocales = 0, consonantes = 0, i;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%[^\n]", cadena);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (isalpha(cadena[i])) { // Verifica si es una letra
            switch (tolower(cadena[i])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vocales++;
                    break;
                default:
                    consonantes++;
            }
        }
    }

    printf("Número de vocales: %d\n", vocales);
    printf("Número de consonantes: %d\n", consonantes);

    return 0;
}
