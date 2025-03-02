// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) {
            return arr + i;
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int valorBuscar;

    printf("Ingrese el valor a buscar (10, 20, 30, 40, o 50): ");
    scanf("%d", &valorBuscar);

    int *resultado = buscarElemento(arr, tamaño, valorBuscar);

    if (resultado != NULL) {
        printf("El elemento %d se encontró en la dirección: %p\n", valorBuscar, (void *)resultado);
        printf("El valor del elemento encontrado es: %d\n", *resultado);
    } else {
        printf("El elemento %d no se encontró en el arreglo.\n", valorBuscar);
    }

    return 0;
}
