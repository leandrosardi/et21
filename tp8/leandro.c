#include <stdio.h>
int main() {
    char nombre[]= "Leandro Sardi";
    printf("Nombre: %s\n", nombre);
    char *puntero = nombre;
    int letras = 0;
    int vocales = 0;
    while (*puntero != '\0'){
        printf("%c\n", *puntero);
        letras++;
        puntero++;
        if (*puntero == 'a' || *puntero == 'e' || *puntero == 'i' || *puntero == 'o' || *puntero == 'u' ||
            *puntero == 'A' || *puntero == 'E' || *puntero == 'I' || *puntero == 'O' || *puntero == 'U') 
        {
            vocales++;
        }
    }
    printf("Cantidad de letras: %d\n", letras);
    printf("Cantidad de vocales: %d\n", vocales);
    return 0;
}