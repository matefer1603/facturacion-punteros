#include <stdio.h>
#include "menus.h"

int main(int argc, char *argv[])
{
    int opcion1 = 0, continuar1 = 0;
    char opcion2;
    float num1 = 0, num2 = 0, num3 = 0;
    float prca = 50, prcb = 35, prcc = 200;
    float tota = 0, totb = 0, totc = 0;
    float subtotal = 0, total = 0;
    char nombre[50];
    char cedula[50];

    printf("*********BIENVENIDO AL SISTEMA DE FACTURACIÓN DE SmartTech***********\n");
    
    do
    {
        opcion1 = menuPrincipal();

        switch (opcion1)
        {
        case 1:
            do
            {
                opcion2 = menuProductos();

                switch (opcion2)
                {
                case 'a' :
                    printf("Ingrese la cantidad de Teclados que desea facturar: ");
                    scanf("%f", &num1);
                    break;
                case 'b' :
                    printf("Ingrese la cantidad de Auriculares que desea facturar: ");
                    scanf("%f", &num2);
                    break;
                case 'c' :
                    printf("Ingrese la cantidad de Tarjetas Graficas que desea facturar: ");
                    scanf("%f", &num3);
                    break;

                default:
                    printf("la opción elegida no existe \n");
                    break;
                }
                printf("Desea facturar otro producto  1) Si   2) No: ");
                fflush(stdin);
                scanf("%d", &continuar1);
            } while (continuar1 == 1);
            break;
        case 2:
            printf("Ingrese su nombre: ");
            scanf("%s", nombre);
            printf("Ingrese su número de cédula: ");
            scanf("%s", cedula);
            tota = num1 * prca;
            totb = num2 * prcb;
            totc = num3 * prcc;


            imprimirFactura(&num1, &num2, &num3, &prca, &prcb, &prcc, &tota, &totb, &totc, nombre, cedula);

            subtotal = tota + totb + totc + totc;
            printf("El subtotal sin descuento es: %.2f\n", subtotal);

            subtotal = calculoSubtotal(subtotal);

            total = subtotal * 1.12;

            printf("El subtotal es: %.2f\n", subtotal);
            printf("El total es: %.2f\n", total);
            opcion1 = 3;
            break;
        case 3:
            printf("Adios");
            opcion1 = 3;
            break;

        default:
            printf("Elija una opción correcta");
            break;
        }
    } while (opcion1 != 3);
    return 0;
}
