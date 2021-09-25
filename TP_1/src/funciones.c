#include <stdio.h>
#include <stdlib.h>

float obtenerFloat(char mensaje[],char mensajeError[],float maximo, float minimo)
 {
    float buffer;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%f",&buffer);
     while(buffer<minimo || buffer>maximo)
     {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%f",&buffer);
     }
    return buffer;
 }

float suma(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1 + numero2;
     return result;
 }

float resta(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1 - numero2;
     return result;
 }

 float division(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1/numero2;
     return result;
 }

 float multiplicacion(float numero1, float numero2)
 {
     float result;
     fflush(stdin);
     result = numero1 * numero2;
     return result;
 }

 float factorial(float numero)
 {
     float result=1.0;
     for(;numero>0;numero--)
     {
         result = result*numero;
     }
     return result;
 }
