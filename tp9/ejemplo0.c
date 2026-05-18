#include <stdio.h>

int main() {
    char* p = "Hola";
    printf("La direccion (p) es: %p\n", p);     // Muestra la ubicación en memoria
    printf("El primer caracter (*p) es: %c\n", *p); // Muestra la 'H'
    return 0;
}
