#include <stdio.h>
#include <string.h> // Necesario para estas funciones

int main() {
    char origen[] = "Hola";
    char destino[20];

    strcpy(destino, origen); // Copia origen en destino
    if (strcmp(destino, "Hola") == 0) { // Compara si son iguales
        printf("Copiado con exito: %s\n", destino);
    }
    return 0;
}
