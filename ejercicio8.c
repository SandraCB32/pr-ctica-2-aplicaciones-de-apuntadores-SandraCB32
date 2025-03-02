// Intercambio de Valores
#include <stdio.h>
#include <string.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados
    printf("Valores antes del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    intercambiar(&arr[0], &arr[1]);
    printf("Valores después del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    return 0;
}
