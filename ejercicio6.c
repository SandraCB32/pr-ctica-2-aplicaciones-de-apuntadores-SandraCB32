/*
  Inversión de una Cadena Usando Apuntadores
*/

#include <stdio.h>
#include <string.h>

void invertirCadena(char *cadena) {
    char *inicio = cadena;
    char *fin = inicio + strlen(cadena) - 1;
    char temp;
    
    while (inicio < fin) {
        temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main() {
    char cadena[] = "Hola Mundo";
    printf("Cadena original: %s\n", cadena);
    invertirCadena(cadena);
    printf("Cadena invertida: %s\n", cadena);

    // Prueba con otra cadena
    char cadena2[] = "Sandra";
    printf("Cadena original: %s\n", cadena2);
    invertirCadena(cadena2);
    printf("Cadena invertida: %s\n", cadena2);
    return 0;
}
