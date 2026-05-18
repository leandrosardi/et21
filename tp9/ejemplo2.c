#include <stdio.h>

int main() {
    int numeros[] = {10, 20, 30};
    int *p = numeros; // Apunta al primer elemento

    for(int i = 0; i < 3; i++) {
        printf("Valor: %d\n", *(p + i)); // p + i se mueve en la memoria
    }

    for(int i = 0; i < 3; i++) {
        printf("Valor: %d\n", numeros[i]); // p + i se mueve en la memoria
    }

    return 0;
}
