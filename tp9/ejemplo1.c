#include <stdio.h>

void intercambiar(int *px, int *py) { // Recibe direcciones
    int temp;
    temp = *px;   // Guarda el valor de x
    *px = *py;    // Pone el valor de y en x
    *py = temp;   // Pone el valor guardado en y
}

int main() {
    int a = 10, b = 20;
    intercambiar(&a, &b); // Enviamos las direcciones con &
    printf("a: %d, b: %d\n", a, b); // Ahora a es 20 y b es 10
    return 0;
}
