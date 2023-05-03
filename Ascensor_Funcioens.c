#include <stdio.h>

void menu();
void llamar_ascensor(int* piso_actual);
void seleccionar_piso(int* piso_actual);
void mostrar_piso_actual(int piso_actual);

int main() {
    int piso_actual = 0;
    char opcion;
    do {
        menu();
        scanf("%c", &opcion);
        switch (opcion) {
            case '1':
                llamar_ascensor(&piso_actual);
                break;
            case '2':
                seleccionar_piso(&piso_actual);
                break;
            case '3':
                mostrar_piso_actual(piso_actual);
                break;
            case '4':
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
                break;
        }
        getchar();
    } while (opcion != '4');
    return 0;
}

void menu() {
    printf("\n--- MENU DEL ASCENSOR ---\n");
    printf("1. Llamar ascensor\n");
    printf("2. Seleccionar piso\n");
    printf("3. Mostrar piso actual\n");
    printf("4. Salir\n");
    printf("Ingrese una opcion: ");
}

void llamar_ascensor(int* piso_actual) {
    int piso_llamada;
    printf("Ingrese el piso desde donde llama al ascensor (0-9): ");
    scanf("%d", &piso_llamada);
    if (piso_llamada < 10) {
        if (piso_llamada == *piso_actual) {
            printf("El ascensor ya se encuentra en el piso %d\n", *piso_actual);
        } else {
            printf("Moviendo ascensor...\n");
            if (piso_llamada > *piso_actual) {
                for (int i = *piso_actual + 1; i <= piso_llamada; i++) {
                    printf("Ascensor en piso %d\n", i);
                }
            } else {
                for (int i = *piso_actual - 1; i >= piso_llamada; i--) {
                    printf("Ascensor en piso %d\n", i);
                }
            }
            *piso_actual = piso_llamada;
        }
    }
}

void seleccionar_piso(int* piso_actual) {
    int piso_seleccionado;
    printf("Ingrese el piso al que desea ir (0-9): ");
    scanf("%d", &piso_seleccionado);
    if (piso_seleccionado < 10) {
        if (piso_seleccionado == *piso_actual) {
            printf("El ascensor ya se encuentra en el piso %d\n", *piso_actual);
        } else {
            printf("Moviendo ascensor...\n");
            if (piso_seleccionado > *piso_actual) {
                for (int i = *piso_actual + 1; i <= piso_seleccionado; i++) {
                    printf("Ascensor en piso %d\n", i);
                }
            } else {
                for (int i = *piso_actual - 1; i >= piso_seleccionado; i--) {
                    printf("Ascensor en piso %d\n", i);
                }
            }
            *piso_actual = piso_seleccionado;
        }
    }
}

void mostrar_piso_actual(int piso_actual) {
    switch (piso_actual) {
        case 0:
            printf("El ascensor se encuentra en la planta baja\n");
            break;
        case 1:
            printf("El ascensor se encuentra en el primer piso\n");
            break;
        case 2:
            printf("El ascensor se encuentra en el segundo piso\n");
            break;
        case 3:
            printf("El ascensor se encuentra en el tercer piso\n");
            break;
        default:
            printf("El ascensor se encuentra en el piso %d\n", piso_actual);
            break;
    }
}
