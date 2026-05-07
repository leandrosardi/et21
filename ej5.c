#include <stdio.h>

int main() {
    char i = 10;
    char *p = &i;

    printf("Valor de i: %d\n", i); // Imprime 10
    printf("Valor de p: %p\n", p); // Imprime la dirección de i

    printf("Size de i: %zu\n", sizeof(i)); // Imprime el tamaño de i
    printf("Size de p: %zu\n", sizeof(p)); // Imprime el tamaño de p

    return 0;
}