#include <stdio.h>
#include "funciones.h"

void agregarProducto(Producto *productos, int *numProductos) {
    if (*numProductos == maxP) {
        printf("Se ha alcanzado el límite máximo de productos.\n");
        return;
    }

    Producto nuevoProducto;

    printf("Ingrese el nombre del producto: ");
    scanf("%49s", nuevoProducto.nombre);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &nuevoProducto.precio);

    productos[*numProductos] = nuevoProducto;
    (*numProductos)++;

    printf("Producto agregado correctamente.\n");
}

void mostrarFactura(Producto *productos, int numProductos) {
    if (numProductos == 0) {
        printf("No hay productos en la factura.\n");
        return;
    }

    printf("==== Bienvenido al sistema de facturación de Smart Tech ====\n");
    printf("Producto\t\tPrecio\n");

    float total = 0.0;
    for (int i = 0; i < numProductos; i++) {
        printf("%s\t\t%.2f\n", productos[i].nombre, productos[i].precio);
        total += productos[i].precio;
    }
    printf("Total\t\t%.2f\n", total);
}
