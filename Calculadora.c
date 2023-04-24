#include <stdio.h>

void sumar(int sumando1, int sumando2) {
    int suma;
    suma = sumando1 + sumando2;
    printf("La suma es %d\n", suma);
}

void restar(int restando1, int restando2) {
    int resta;
    resta = restando1 - restando2;
    printf("La resta es %d\n", resta);
}

void multiplicar(int multiplicando1, int multiplicando2) {
    int multiplicacion;
    multiplicacion = multiplicando1 * multiplicando2;
    printf("La multiplicacion es %d\n", multiplicacion);
}

void dividir(int dividendo, int divisor) {
    int division;
    if (divisor == 0) {
        printf("No se puede dividir entre cero\n");
    } else {
        division = dividendo / divisor;
        printf("La division es %d\n", division);
    }
}

int main() {
    int opcion, num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Seleccione una opcion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            sumar(num1, num2);
            break;
        case 2:
            restar(num1, num2);
            break;
        case 3:
            multiplicar(num1, num2);
            break;
        case 4:
            dividir(num1, num2);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}