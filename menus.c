#include <stdio.h>
#include "menus.h"

char menuProductos()
{
    char opcion2;
    printf("Escoja los productos que desea facturar:\n");
    printf("a) Teclados (Precio: $50)\n");
    printf("b) Auriculares (Precio: $35)\n");
    printf("c) Tarjetas graficas (Precio: $200)\n");
    scanf("%s", &opcion2);

    return opcion2;
}

int menuPrincipal()
{
    int opcion1;
    printf("1) Facturar Producto\n");
    printf("2) Imprimir Factura\n");
    printf("3) Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion1);
    return opcion1;
}