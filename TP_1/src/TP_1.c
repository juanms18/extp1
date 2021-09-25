/*
 ============================================================================
 tp_laboratorio_1.c
 Juan Manuel Sanchez
 1°E
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


 int main()
{
	setbuf(stdout, NULL);
    char seguir='s';
    int opcion;
    char mensaje[]="\nIngrese Valor: ";
    char menError[]="\n Error!! Valor fuera del rango permitido! ";
    float max=3000.0;
    float min=0.0;
    float numA = 0;
	float numB = 0;
    float resultado1;
    float resultado2;
	float resultado3;
	float resultado4;
	float resultado5;
	float resultado6;
    int flag=0;
    while(seguir=='s')
    {
    	printf("\n1- Ingresar 1er operando (A=%.2f)\n", numA);
    	printf("2-  Ingresar 2do operando (A=%.2f)\n", numB);
    	printf("3- Calcular todas las operaciones \n");
    	printf("4- Mostrar resultados \n");
    	printf("5- Salir\n");
    	printf("\n\nIngrese su opcion: ");
    	scanf("%d", &opcion);
    	if (opcion<1  ||  opcion>5)
    	{
    		printf("\nError!! Opcion incorrecta, ingrese una opcion del menu!\n\n");
    		system("pause");

    	}
    	else{

           switch(opcion)
        {
            case 1:
            	system("cls");
            	numA=obtenerFloat(mensaje,menError,max,min);
                break;
            case 2:
            	system("cls");
                numB=obtenerFloat(mensaje,menError,max,min);
                break;
            case 3:
            	system("cls");
                resultado1=suma(numA,numB);
                resultado2=resta(numA,numB);
                resultado3=division(numA,numB);
                resultado4=multiplicacion(numA,numB);
                resultado5=factorial(numA);
                resultado6=factorial(numB);
                flag++;
                printf("\nCalculando Operaciones!!\n\n ");
                system("pause");
                break;
            case 4:
            	if(flag == 0)
            	{
            		printf("\nPara poder ver los resultados primero seleccione la opcion 3!\n\n");
            	}
            	else
            	{
            	system("cls");
            	printf("\nEl resultado de A+B es: %.3f\n",resultado1);
                printf("\nEl resultado de A-B es: %.3f\n",resultado2);
                if(numB == 0){
                	printf("\nERROR!!! No se puede dividir por 0\n");
                }
                else
                {
                printf("\nEl resultado de A/B es: %.3f\n",resultado3);
                }
                printf("\nEl resultado de A*B es: %.3f\n",resultado4);
                if(numA > 13)
                {
                	printf("\nERROR!!! El numero A es demasiado grande para calcular el factorial. Por favor ingrese un numero menor a 13.\n");
                }
                else
                {
                printf("\nEl factorial de A es : es: %.3f\n",resultado5);
                }
				if (numB > 13)
				{
					printf("\nERROR!!! El numero B es demasiado grande para calcular el factorial. Por favor ingrese un numero menor a 13.\n\n ");
				}
				else
				{
					 printf("\nEl factorial de b es : es: %.3f\n\n",resultado6);
				}

            	}
            	system("pause");
                break;
            case 5:
            	system("cls");
            	seguir = 'n';
                break;

        }
    	}

    }
   return 0;
}
