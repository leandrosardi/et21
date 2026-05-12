#include <stdio.h>

int main() {
    char nombre[] = "Ezequiel";
 
    printf("Nombre completo: %s\n", nombre);
    printf("------------------------\n");
   
    char *puntero = nombre;
    int contador = 0;
   
    printf("Letras linea por linea:\n");
   
    while (*puntero != '\0') {
        printf("%c\n", *puntero);
        contador++;
        puntero++;
    }
   
    printf("------------------------\n");
    printf("Cantidad total de caracteres: %d\n", contador);
   
    return 0;
}
