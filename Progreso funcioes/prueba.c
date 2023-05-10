#include <stdio.h>
#include <string.h>
#include "funciones.h"


int main() {
printf("Transporte Publico\n");
if (login()) {
    menu();
} else {
    printf("Ingreso incorrecto. Fin del programa.\n");
}

return 0;
}