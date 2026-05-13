#include <stdio.h>

int main() {
    char nombre[] = "maria";
    char *texto = nombre;
    int contador = 0;

    while (*texto != '\0') {
        printf("%c\n", *texto);
        contador++;
        texto++;
    }

    printf("Nombre: %s\n", nombre);
    printf("Letras: %d\n", contador);
    return 0;
}
