#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


/*Implementamos la funcion menu.-*/


void menuGeneral()
{

float numero1;
float numero2;

    printf("\n===================================\n");
    printf("BIENVENIDOS A CALCULOS ARITMETICOS");
    printf("\n===================================\n");
    printf("\nIngrese un numero: ");
    scanf("%f", &numero1);

    printf("\nIngrese un numero: ");
    scanf("%f", &numero2);
    system("cls");

int opc;

do{
printf("\n==========================\n");
printf("\nOPERACIONES ARITMETICAS");
printf("\n==========================\n");
printf("\n1. Sumar");
printf("\n2. Restar");
printf("\n3. Dividir");
printf("\n4. Multiplicar");
printf("\n5. Reiniciar");
printf("\n==========================\n");
printf("\n6. Salir");
printf("\n==========================\n");
printf("\nOpcion: ");
scanf("%d", &opc);

switch(opc)
{

case 1: sumar(numero1, numero2); break;
case 2: restar(numero1, numero2); break;
case 3: dividir(numero1, numero2); break;
case 4: multiplicar(numero1, numero2); break;
case 5: menuGeneral();

}
}while(opc != 6);

}
/*generamos la funcion sumar.-*/

void sumar(float numero1, float numero2)
{
//system("cls");
//float num1;
//float num2;
float suma=0;

//printf("Ingrese dos numeros: ");
//scanf("%f" "%f", &num1, &num2);

suma = numero1 + numero2;

printf("\n==========================\n");
printf("\nLa suma es: %.2f \n", suma);
printf("\n==========================\n");

system("pause");
system("cls");
}


/*//generamos la funcion restar.-*/

void restar(float numero1, float numero2)
{
//getchar();
//system("cls");
//float num1;
//float num2;
float resta=0;

//printf("Ingrese dos numeros: ");
//scanf("%f" "%f", &num1, &num2);

resta = numero1 - numero2;

printf("\n==========================\n");
printf("\nLa resta es: %.2f \n", resta);
printf("\n==========================\n");

system("pause");
system("cls");
}

/*//generamos la funcion dividir.-*/

void dividir(float numero1, float numero2)
{
//getchar();
//system("cls");
//float num1;
//float num2;
float div=0;

//printf("Ingrese dos numeros: ");
//scanf("%f" "%f", &num1, &num2);

div = numero1 / numero2;

if(numero2 == 0)
{
    printf("\n=============================================================================\n");
    printf("\nERROR!!...NO SE PUEDE DIVIDIR POR CERO, REINGRESE LOS VALORES CON LA OPCION 5");
    printf("\n=============================================================================\n");
}

else
{
  printf("\n==========================\n");
  printf("\nLa division es: %.2f \n", div);
  printf("\n==========================\n");
}

system("pause");
system("cls");
}

/*generamos la funcion multiplicar.-*/

void multiplicar(float numero1, float numero2)
{
//getchar();
//system("cls");
//float num1;
//float num2;
float mult=0;

//printf("Ingrese dos numeros: ");
//scanf("%f" "%f", &num1, &num2);

mult = numero1 * numero2;

printf("\n============================\n");
printf("\nLa multiplicacion es: %.2f \n", mult);
printf("\n============================\n");

system("pause");
system("cls");
}
