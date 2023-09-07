//programa que le pides cualquier tabla de multiplicar y te la da hasta el x10
#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero para generar la tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d:\n", numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

