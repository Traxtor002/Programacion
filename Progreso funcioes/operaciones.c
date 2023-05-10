#include <stdio.h>
float calcularDescuento(float precio) {
    float descuento = 0.0;

    if (precio < 50.0) {
        descuento = 0.0;
    } else if (precio >= 50.0 && precio < 100.0) {
        descuento = precio * 0.05;
    } else if (precio >= 100.0 && precio < 500.0) {
        descuento = precio * 0.1;
    } else if (precio >= 500.0) {
        descuento = precio * 0.2;
    }

    return descuento;
}

float calcularPrecioRuta(char tipoRuta) {
    float precio;

    switch (tipoRuta) {
        case '1':
            precio = 0.10;
            break;
        case '2':
            precio = 0.15;
            break;
        case '3':
            precio = 0.20;
            break;
        default:
            printf("Tipo de ruta inválido.\n");
            precio = 0.0;
            break;
    }

    return precio;
}
// funcion para