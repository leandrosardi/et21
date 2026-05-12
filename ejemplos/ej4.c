#include <stdio.h>

int main() {
    char* s1 = "Abc";
    char s2[4] = "A";

    printf("Valor de s1: %s\n", s1); // Imprime "Abc"
    printf("Size de s1: %zu\n", sizeof(s1)); // Imprime el tamaño de s1

    printf("Valor de s2: %s\n", s2); // Imprime "Abc"
    printf("Size de s2: %zu\n", sizeof(s2)); // Imprime el tamaño de s2

    return 0;
}