def analizar_nombre():
    nombre = input("Introduce tu nombre: ")
    vocales = "aeiouAEIOU"
    contador_vocales = 0
   
    print(f"\n--- Resultados para: {nombre} ---")
   
   
    print(f"{'Carácter':<10} | {'Código ASCII':<12}")
    print("-" * 25)
   
    for caracter in nombre:
        # 1. Obtener el código ASCII usando la función ord()
        codigo_ascii = ord(caracter)
        print(f"{caracter:<10} | {codigo_ascii:<12}")
       
        # 2. Detectar si es una vocal
        if caracter in vocales:
            contador_vocales += 1
           
    print("-" * 25)
    print(f"Total de vocales: {contador_vocales}")


if __name__ == "__main__":
    analizar_nombre()