#include <stdio.h>
#include <string.h>

int main() {
    char codigoProducto[11];
    char codigoAlmacen[6];

    while (1) {
        printf("Ingrese el codigo de barra del producto (10 digitos): ");
        scanf("%s", codigoProducto);

        printf("Ingrese el codigo del almacen (debe comenzar con 20): ");
        scanf("%s", codigoAlmacen);

        if (strlen(codigoProducto) == 10 && strncmp(codigoAlmacen, "20", 2) == 0) {
            break;
        }

        printf("Error: Los codigos ingresados son incorrectos. Intentelo de nuevo.\n");
    }

    if (strcmp(codigoProducto, "8949899430") == 0 ||
        strcmp(codigoProducto, "7653512593") == 0 ||
        strcmp(codigoProducto, "9383867373") == 0 ||
        strcmp(codigoProducto, "88392904209") == 0) {
        printf("Descuento aplicado: 20%%\n");
    } else {
        printf("No se aplico ningun descuento.\n");
    }

    if (strcmp(codigoProducto, "8949859430") == 0 &&
        strcmp(codigoAlmacen, "20763") == 0) {
        printf("Puede participar en la rifa del vehiculo!\n");
    } else if (strcmp(codigoProducto, "1653312593") == 0 &&
               strcmp(codigoAlmacen, "20221") == 0) {
        printf("Puede participar en la rifa del vehiculo!\n");
    } else if (strcmp(codigoProducto, "2483867373") == 0 &&
               strcmp(codigoAlmacen, "20130") == 0) {
        printf("Puede participar en la rifa del vehiculo \n");
    } else if (strcmp(codigoProducto, "1839230922") == 0 &&
               strcmp(codigoAlmacen, "20561") == 0) {
        printf("Puede participar en la rifa del vehiculo!\n");
    } else {
        printf("No puede participar en la rifa del vehiculo.\n");
    }

    printf("Los productos se registraron correctamente.\n");

    return 0;
}

