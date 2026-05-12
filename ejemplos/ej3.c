#include <stdio.h>

int main() {
    char c = 'A';
    
    printf("Valor de c: %c\n", c); // Imprime 'A'
    printf("Valor de c (entero): %d\n", c); // Imprime 65 (código ASCII de 'A')
    printf("Size de c: %zu\n", sizeof(c)); // Imprime el tamaño de c

    return 0;
}