#include <stdio.h>
#include <string.h>

int main(void) {
    char texto[100];

    printf("Nombre: ");
    if (scanf("%99s", texto) != 1) {
        return 1;
    }

    printf("\n");
    size_t length = strlen(texto);
    for (size_t i = 0; i < length; i++) {
        printf("%c\n", texto[i]);
    };
    printf("Cantidad de vocales: %zu\n",
        (size_t)(strchr(texto, 'a') != NULL) +
        (size_t)(strchr(texto, 'e') != NULL) +
        (size_t)(strchr(texto, 'i') != NULL) +
        (size_t)(strchr(texto, 'o') != NULL) +
        (size_t)(strchr(texto, 'u') != NULL) +
        (size_t)(strchr(texto, 'A') != NULL) +
        (size_t)(strchr(texto, 'E') != NULL) +
        (size_t)(strchr(texto, 'I') != NULL) +
        (size_t)(strchr(texto, 'O') != NULL) +
        (size_t)(strchr(texto, 'U') != NULL)
    );  
    printf("Cantidad de letras: %zu\n", length);
    printf("Codigo ASCII de cada letra:\n");
    for (size_t i = 0; i < length; i++) {
        printf("%d\n", (int)texto[i]);
    };
    return 0;
}
