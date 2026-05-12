#include <stdio.h>
#include <stdbool.h>

int main() {
    bool b = true;
    long i = 10;

    printf("Valor de b: %d\n", b); // Imprime 1 (true)
    printf("Valor de i: %ld\n", i); // Imprime 10
    printf("Size de i: %zu\n", sizeof(i)); // Imprime el tamaño de i

    return 0;
}