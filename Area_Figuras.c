#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


float area_circulo(float area_cir);
float per_Circulo(float perimetro_cir);

void area_triangulo(float area_tri);
void per_triangulo(float perimetro_tri);

void area_rectangulo(float area_rec);
void per_rectangulo(float perimetro_rec);

void area_cuadrado(float area_cua);
void per_cuadrado(float per_cua);

void area_trapecio(int area_trap);
void per_trapecio(float per_trap);


int main() {
    char opc;
    do {
        printf("\n   -- CALCULADORA DE FIGURAS -- \n");
        printf("1. Calcular el area de un circulo\n");
        printf("2. Calcular el perimetro de un circulo\n");
        printf("3. Calcular el area de un triangulo\n");
        printf("4. Calcular el perimetro de un triangulo\n");
        printf("5. Calcular el area de un rectangulo\n");
        printf("6. Calcular el perimetro de un rectangulo\n");
        printf("7. Calcular el area de un cuadrado\n");
        printf("8. Calcular el perimetro de un cuadrado\n");
        printf("9. Calcular el area de un trapecio\n");
        printf("10. Calcular el perimetro de un trapecio\n");
        printf("0. Salir.\n");

        printf("\nElige una opcion: ");
        scanf("%d", &opc);
        system("cls");   

        switch (opc) {
            case 0:
                printf("\nSaliendo del programa...\n");
                break;
            case 1:
                area_circulo(0);
                break;
            case 2:
                per_Circulo(0);
                break;
            case 3:
                area_triangulo(0);
                break;
            case 4:
                per_triangulo(0);
                break;
            case 5:
                area_rectangulo(0);
                break;
            case 6:
                per_rectangulo(0);
                break;
            case 7:
                area_cuadrado(0);
                break;
            case 8:
                per_cuadrado(0);
                break;
            case 9:
                area_trapecio(0);
                break;
            case 10:
                per_trapecio(0);
                break;
            default:
                printf("\nOpcion invalida, intente otra vez... \n");
                break;
        } getchar();
    } while (opc != 0);
    return 0;
}

float area_circulo(float area_cir){
    float radio;

    printf( "\nDigita el radio: " );
    scanf( "%f", &radio );

    area_cir = 3.141592 * radio * radio;

    printf( "\nEl area de la circunferencia es: %g\n\n", area_cir );
}

float per_Circulo(float perimetro_cir){
    float radio;
	
    printf( "\nIntroduzca radio: " );
    scanf( "%f", &radio );

    perimetro_cir = 2 * 3.141592 * radio;

    printf( "\nEl perimetro es: %f\n\n", perimetro_cir );

}

void area_triangulo(float area_tri){
    float altura, base;

    printf( "\nIngresa  la base del triangulo: " );
    scanf( "%f", &base );
    printf( "\nIngresa  la altura del triangulo: " );
    scanf( "%f", &altura );
    area_tri = base * altura / 2;

    printf( "\nArea del tri: %g\n\n", area_tri); // da un valor más exacto
}

void per_triangulo(float perimetro_tri){
    float a, b, c;
    float area;
    
    printf("\nLado A: ");
    scanf(" %f",&a);
    printf("\nLado B: ");
    scanf(" %f",&b);
    printf("\nLado C: ");
    scanf(" %f",&c);

    perimetro_tri = a + b + c;
    printf("Perimetro : %.2f\n\n", perimetro_tri); //imprime sólo 2 dig despues del punto
}

void area_rectangulo(float area_rec){ 
   float altura, base;
   printf("\nIngresa el valor de la altura: ");
   scanf("%f", &altura); 
   printf("\nIngresa el valor de la base: ");
   scanf("%f", &base);
   area_rec = altura * base;
   printf ("\nValor de area: %g\n\n", area_rec);
}

void per_rectangulo(float perimetro_rec){
    float altura, base;
    printf("\nIngresa el valor de la altura: ");
    scanf("%f", &altura); 
    printf("\nIngresa el valor de la base: ");
    scanf("%f", &base);
    perimetro_rec = altura + base + altura + base;
    printf ("\nValor de perimetro: %g\n\n", perimetro_rec);
}

void area_cuadrado(float area_cua){
    float lado;
    printf("\nIngresa el valor del lado: ");
    scanf("%f", &lado);
    area_cua = lado * lado;
    printf("\nEl area del cuadrado es: %g \n\n", area_cua);
}

void per_cuadrado(float per_cua){
    float lado;
    printf("\nIngresa el valor del lado: ");
    scanf("%f", &lado);
    per_cua = lado * 4;
    printf("\nEl perimetro del cuadrado es: %g \n\n", per_cua);
}

void area_trapecio(int area_trap){ 
    int base_May, base_men, area, altura;
 
    printf("\nDigite la base mayor:");
    scanf("%i", &base_May);
    printf("\nDigete la base menor:");
    scanf("%i", &base_men);
    printf("\nDigite la altura: ");
    scanf("%i", &altura);

    area_trap = ((base_May + base_men)*altura)/2;
    printf("\n El area del trapecio es: %i\n\n", area_trap);
}

void per_trapecio(float perimetro_trap){ 
    float a, b, c, d;
    
    printf("\nLado A: ");
    scanf(" %f",&a);
    printf("\nLado B: ");
    scanf(" %f",&b);
    printf("\nLado C: ");
    scanf(" %f",&c);
    printf("\nLado D: ");
    scanf(" %f",&d);

    perimetro_trap = a + b + c + d;
    printf("\nPerimetro : %.2f\n\n", perimetro_trap); //imprime sólo 2 dig despues del punto    
    }