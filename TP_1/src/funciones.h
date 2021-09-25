/*
 * funciones.h
 *
 *  Created on: 21 sep. 2021
 *      Author: Juan
 */
/// @fn float obtenerFloat(char[], char[], float, float)
/// @brief Pide un float y lo retorna
/// @param mensaje El mensaje que se va a mostrar para pedir el Float
/// @param mensajeError El mensaje de error si se ingresa un dato fuera de rango
/// @param maximo El rango maximo para el Float
/// @param minimo El rango minimo para el Float
/// @return Retorna el Float ingresado
float obtenerFloat(char mensaje[],char mensajeError[],float maximo, float minimo);

/// @fn float suma(float, float)
/// @brief Recibe dos Float y los suma
/// @param numero1 Primer Float que recibe
/// @param numero2 Segundo Float que recibe
/// @return Retorna el resultado de la suma
float suma(float numero1, float numero2);

/// @fn float resta(float, float)
/// @brief  Recibe dos float y los resta
/// @param numero1 Primer float que recibe
/// @param numero2 Segundo Float que recibe
/// @return Retorna el resultado de la resta
float resta(float numero1, float numero2);

/// @fn float division(float, float)
/// @brief Recibe dos float y los divide
/// @param numero1 Primer float que recibe
/// @param numero2 Segundo Float que recibe
/// @return Retorna el resultado de la division
float division(float numero1, float numero2);

/// @fn float multiplicacion(float, float)
/// @brief Recibe dos float y los multiplica
/// @param numero1  Primer float que recibe
/// @param numero2  Segundo Float que recibe
/// @return Retorna el resultado de la multiplicacion
float multiplicacion(float numero1, float numero2);


/// @fn float factorial(float)
/// @brief Recibe un float y calcula el factorial siempre y cuando sea menor que 12
/// @param numero Float que recibe
/// @return Retorna el valor del factorial
float factorial(float numero);

