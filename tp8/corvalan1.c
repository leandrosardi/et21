#include <stdio.h>
int main() {
    char nombre[]= "Matias";
    printf("Nombre: %s\n", nombre);
    char *puntero = nombre;
    int cantidad = 0;
    while (*puntero != '\0'){
        printf("%c\n", *puntero);
        cantidad++;
        puntero++;
    }
    printf("Cantidad de letras: %d\n", cantidad);
    return 0;
}