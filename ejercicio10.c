// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    ordenarBurbuja(arr, tamaño);
    printf("Arreglo ordenado: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    int arr1[] = {54, 60, 15, 33, 22};
    // Código para ordenar y mostrar el arreglo
    int tamaño1 = sizeof(arr1) / sizeof(arr1[0]);
    ordenarBurbuja(arr1, tamaño1);
    printf("Arreglo ordenado 2: ");
    for (int i = 0; i < tamaño1; i++) {
        printf("%d ", *(arr1 + i));
    }
    printf("\n");

    return 0;
}
