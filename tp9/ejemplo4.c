#include <stdio.h>

struct Alumno {
    char nombre[20];
    int edad;
};

int main() {
    struct Alumno a1 = {"Martina", 19};
    struct Alumno *p = &a1; // Puntero a la estructura

    printf("Nombre: %s\n", p->nombre); // Acceso con ->
    printf("Edad: %d\n", p->edad);
    return 0;
}
