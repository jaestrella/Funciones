/*
 * funciones.h
 *
 *  Created on: 24 oct 2023
 *      Author: usuario
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
	/**
	 * funcion que dice si un año es bisisesto o no
	 */
	int bisiesto(int anno);
	/**
	 * funcion que calcula el factorial de un numero
	 */
	double factorial(int n);
	/**
	 * funcion que dice si un numero es perfecto o no
	 */

	double combinaciones(int m, int n);

	int perfecto(int n);
	/**
	 * funcion que dice si un numero es primo o no
	 */
	int primo(int n);
	/**
	 * funcion que muestras los n primos en un rango
	 */
	int rangoPrimo(int n);
	/**
	 * funcion que dice cual numero es mayor y cual menor
	 */
	int mayorMenor(int n1, int n2);
	/**
	 * funcion que devuelve el maximo
	 */
	int maximo(int n1, int n2);
	/**
	 * funcion que devuelve el minimo
	 */
	int minimo(int n1, int n2);
	/**
	* funcion que clacula el maximo comun divisor
	*/
	int maximoComunDivisor(int n1, int n2);
	/**
	* funcion que calcula el minimo comun multiplo
	*/
	int minimoComunMultiplo(int n1, int n2);

	void simplifica(int *numerador, int *denominador);
	void sumaFracciones(int num1, int den1, int num2, int den2, int *resNum, int *resDen);
	void mayorYMenor(double n1, double n2, double *mayor, double *menor);
	void imprimirGoldbach(int n);
	int factorialMasProximo(double n);

#endif /* FUNCIONES_H_ */
