#include <stdio.h>
#include "funciones.h"
#define maxP 100

typedef struct {
    char nombre[50];
    float precio;
} Producto;

void agregarProducto(Producto *productos, int *numProductos);
void mostrarFactura(Producto *productos, int numProductos);

int main() {
    Producto productos[maxP];
    int numProductos = 0;
    char opcion;

    do {
        printf("==== Bienvenido al sistema de Smart Tech ====\n");
        printf("1. Agregar producto\n");
        printf("2. Mostrar factura\n");
        printf("3. Salir\n");
        
        printf("Ingrese una opción: ");
        scanf(" %c", &opcion);

        switch (opcion) {
            case '1':
                agregarProducto(productos, &numProductos);
                break;
            case '2':
                mostrarFactura(productos, numProductos);
                break;
            case '3':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, ingrese otro valor o intente nuevamente.\n");
                break;
        }

        printf("\n");
    } while (opcion != '3');

    return 0;
}
