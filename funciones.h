#define maxP 100

typedef struct {
    char nombre[50];
    float precio;
} Producto;

void agregarProducto(Producto *productos, int *numProductos);
void mostrarFactura(Producto *productos, int numProductos);
