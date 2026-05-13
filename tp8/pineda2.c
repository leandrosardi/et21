#include <stdio.h>

int main() {
    char nombre[] = "maria";
    char *texto = nombre;
    int contador = 0;
    int vocales = 0;

    while (*texto != '\0') {
        printf("%c - ASCII: %d\n", *texto, (int)*texto);
        contador++;

        if (*texto == 'a' || *texto == 'e' || *texto == 'i' || *texto == 'o' || *texto == 'u') {
            vocales++;
        }

        texto++;
    }

    printf("\nNombre: %s\n", nombre);
    printf("Letras totales: %d\n", contador);
    printf("Vocales: %d\n", vocales);
    return 0;
}
