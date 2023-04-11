#include <stdio.h>

int main(void) {
    int piso_actual = 0; // Piso actual del ascensor
    int Piso_seleccionado; // Piso seleccionado por el usuario
    int piso_donde_se_llama; // Piso desde donde se llama el ascensor
    int i; // Variable auxiliar para la simulación del movimiento del ascensor

    while (1) {
  printf("\n*********************************\n");
        printf("*     Sistema de ascensor       *\n");
        printf("*       ----------------       *\n");
        printf("* 1. Ir a un piso              *\n");
        printf("* 2. Mostrar piso actual       *\n");
        printf("* 3. Mostrar ubicacion         *\n");
        printf("* 4. Salir del sistema         *\n");
        printf("*********************************\n\n");
        char option = getchar();
        getchar(); // Elimina el caracter 'newline' del buffer

        switch (option) {
            case '1':
                printf("Ingrese el piso desde donde llama al ascensor: ");
                scanf("%d", &piso_donde_se_llama);
                getchar(); // Elimina el caracter 'newline' del buffer

                if (piso_donde_se_llama < 0 || piso_donde_se_llama > 9) {
                    printf("Piso no válido\n");
                } else if (piso_donde_se_llama == piso_actual) {
                    printf("El ascensor ya está en el piso %d\n", piso_actual);
                } else {
                    printf("Ascensor en movimiento...\n");
                    for (i = piso_actual; i < piso_donde_se_llama; i++) {
                        printf("Ascensor en piso %d\n", i + 1);
                    }
                    for (i = piso_actual; i > piso_donde_se_llama; i--) {
                        printf("Ascensor en piso %d\n", i - 1);
                    }
                    piso_actual = piso_donde_se_llama;
                    printf("El ascensor ha llegado al piso %d\n", piso_actual);
                }
                break;

            case '2':
                printf("Ingrese el piso al que desea ir: ");
                scanf("%d", &Piso_seleccionado);
                getchar(); // Elimina el caracter 'newline' del buffer

                if (Piso_seleccionado < 0 || Piso_seleccionado > 9) {
                    printf("Piso no válido\n");
                } else if (Piso_seleccionado == piso_actual) {
                    printf("El ascensor ya está en el piso %d\n", piso_actual);
                } else {
                    printf("Ascensor en movimiento...\n");
                    if (Piso_seleccionado > piso_actual) {
                        for (i = piso_actual; i < Piso_seleccionado; i++) {
                            printf("Ascensor en piso %d\n", i + 1);
                        }
                    } else {
                        for (i = piso_actual; i > Piso_seleccionado; i--) {
                            printf("Ascensor en piso %d\n", i - 1);
                        }
                    }
                    piso_actual = Piso_seleccionado;
                    printf("El ascensor ha llegado al piso %d\n", piso_actual);
                }
                break;

          case '3':
                switch (piso_actual) {
                    case 0:
                        printf("El ascensor está en la planta baja\n");
                        break;
                    case 1:
                        printf("El ascensor está en el primer piso\n");
                        break;
                    case 2:
                        printf("El ascensor está en el segundo piso\n");
                        break;
                    case 3:
                        printf("El ascensor está en el tercer piso\n");
                        break;
                    case 4:
                        printf("El ascensor està en el cuarto piso");
                        break;
                    case 5:
                        printf("El ascensor está en el quito piso\n");
                        break;
                    case 6:
                        printf("El ascensor está en el sexto piso\n");
                        break;
                    case 7:
                        printf("El ascensor está en el septimo piso\n");
                        break;
                    case 8:
                        printf("El ascensor està en el octavo piso");
                        break;
                    case 9:
                        printf("El ascensor està en el noveno piso");
                        break;
                    default:
                        printf("El ascensor está en el piso %d\n", piso_actual);
                        break;
                }  
                 case '4':
                printf("\n***********************\n");
                printf("Ha salido del sistema\n");
                printf("***********************\n");
                return 0;
            default:
                printf("Opción inválida. Por favor intente de nuevo.\n");
                break;
}
}
}