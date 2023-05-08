#include <stdio.h>
#include <string.h>
// Funcion que valida el Login, tomando en cuenta el nombre de usuario y la contraseña, al igual que limita los intentos de inicio de sesion a 3, pasados los 3 intetentos imprimira un mensaje de error de inici de sesion.
int login() {
    char nombres[3][20] = {"David","Martin", "Alejandro"};
    char contras[3][20]= {"1111", "2222", "3333"};

    char nombre[20];
    char contra[20];
    int intentos = 0;

    while (intentos < 3) {
        printf("Ingrese su usuario: ");
        scanf("%s", nombre);
        printf("Ingrese su contraseña: ");
        scanf("%s", contra);

        int i;
        for (i = 0; i < 3; i++) {
            if (strcmp(nombre, nombres[i]) == 0 && strcmp(contra, contras[i]) == 0) {
                return 1; 
            }
        }

        intentos++;
        printf("Usuario o contraseña fallidos. Intento #%d\n", intentos);
    }

    printf("Imposible ingresar.\n");
    return 0;  // Credenciales incorrectas después de 3 intentos
}
//funcion para el menu de precios.Tomando en cuenta los precios dependiendo el tipo de ruta que se escoge en la funcion switch tomara un precio para hacer el calculo del precio y descuento
float calcularPrecioRuta(char tipoRuta) {
    float precio;

    switch (tipoRuta) {
        case 'U':
            precio = 0.10;
            break;
        case 'I':
            precio = 0.15;
            break;
        case 'In':
            precio = 0.20;
            break;
        default:
            printf("Tipo de ruta inválido.\n");
            precio = 0.0;
            break;
    }

    return precio;
}
//funcion de descuentos. En esta funcion se hace el calculo de descuento ependiendo de la distancia y el tipo de ruta escogido
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
//Funcion para seleccion de tipo de ruta, este dato se utilizara para hacer los calculos del precio
void operacionTransporte() {
    int i;
    char tipoRuta;
    float distancia, subtotal, descuento, precioTotal;

    for (i = 0; i < 5; i++) {
        printf("Cliente %d\n", i + 1);
        printf("Ingrese el tipo de ruta (Urbana [U], Interurbana [I], Internacional [I]): ");
        scanf(" %c", &tipoRuta);
        printf("Ingrese la distancia en kilómetros: ");
        scanf("%f", &distancia);
// se hace el clculo dependiendo de la distancia
        float precioPorKilometro = calcularPrecioRuta(tipoRuta);
        subtotal = distancia * precioPorKilometro;
        descuento = calcularDescuento(subtotal);
        precioTotal = subtotal - descuento;

        printf("Subtotal: %.2f\n", subtotal);
        printf("Descuento: %.2f\n", descuento);
        printf("Precio Total: %.2f\n",precioTotal);
}
}
// Funcion para red social, en esta funcion aparecera un menu con opciones de Noticias, Evnetos,Preguntas, se escogera en cual se desea hacer una publicacion.
void redSocial() {
int i;
char mensaje[100];
char categoria;
int noticias = 0, eventos = 0, preguntas = 0;
for (i = 0; i < 5; i++) {
    printf("Mensaje %d\n", i + 1);
    printf("Ingrese el contenido del mensaje: ");
    scanf(" %[^\n]", mensaje);
    printf("Ingrese la categoría del mensaje (Noticias [N], Eventos [E], Preguntas [P]): ");
    scanf(" %c", &categoria);

    switch (categoria) {
        case 'N':
            noticias++;
            break;
        case 'E':
            eventos++;
            break;
        case 'P':
            preguntas++;
            break;
        default:
            printf("Categoría inválida.\n");
            break;
    }
}

printf("Publicaciones:\n");
printf("Noticias: %d\n", noticias);
printf("Eventos: %d\n", eventos);
printf("Preguntas: %d\n", preguntas);
}
//Funcion del menu principal, en este menu apareceran las 3 principales opciones, quienes accederan a otras subfunciones
void menu() {
int opcion;
do {
    printf("\n--- MENÚ ---\n");
    printf("1. Operación de transporte\n");
    printf("2. Interactuar en la red social\n");
    printf("3. Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            operacionTransporte();
            break;
        case 2:
            redSocial();
            break;
        case 3:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }
} while (opcion != 3);
}

int main() {
printf("--- Sistema de Transporte Público ---\n");
if (login()) {
    menu();
} else {
    printf("Ingreso incorrecto. Fin del programa.\n");
}

return 0;
}