/*
 * funciones.c
 *
 *  Created on: 24 oct 2023
 *      Author: usuario
 */
#include <stdio.h>

int bisiesto(int anno){
	if(anno%4==0){
		if(anno%100==0 && anno%400!=0){
			return 0;
		}else{
			return 1;
		}
	}else{
		return 0;
	}
}

double factorial(int n){
	double fact=1;
	do{
		fact=fact*n;
		n--;
	}while(n!=1);
	return fact;
}

double combinaciones(int m, int n){
	return factorial(m)/(factorial(n)*factorial(m-n));
}

int perfecto(int n){
	int i;
	int sumatorio=0;
	if(n==0) return 0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sumatorio = sumatorio+i;
		}
	}
	if(sumatorio==n){
		return 1;
	}else
		return 0;
}

int primo(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int rangoPrimo(int n){
	int i, primo, contador;
	for(i=1;i<n;i++){
		primo=1;
		contador=2;
		while(contador<=i/2 && primo){
			if(i%contador==0){
				primo=0;
			}
			contador++;
		}
		if(primo)
			printf( "%d ", i );
	}
	return 0;
}

int mayorMenor(int n1, int n2){
	if(n1>n2){
		return n1;
	}else
		return n2;
}

int maximo(int n1, int n2){
	if(n1>n2){
		return n1;
	}else
		return n2;
}

int minimo(int n1, int n2){
	if(n1<n2){
		return n1;
	}else
		return n2;
}

int maximoComunDivisor(int n1, int n2){
	int dividendo=maximo(n1,n2);
	int divisor=minimo(n1,n2);
	int resto;

	while(dividendo%divisor!=0){
		resto=dividendo%divisor;
		dividendo=divisor;
		divisor=resto;
	}
	return divisor;
}

int minimoComunMultiplo(int n1, int n2){
	int res=n1*n2/maximoComunDivisor(n1,n2);
	return res;
}

void simplifica(int *numerador, int *denominador){
	int mcdNum=maximoComunDivisor(*numerador,*denominador);
	*numerador=*numerador/mcdNum;
	*denominador=*denominador/mcdNum;
}

void sumaFracciones(int num1, int den1, int num2, int den2, int *resNum, int *resDen){
	int rNum=num1*den2+num2*den1;
	int rDen=den1*den2;
	simplifica(&rNum,&rDen);
	*resNum=rNum;
	*resDen=rDen;
}

void mayorYMenor(double n1, double n2, double *mayor, double *menor){
	if(n1>n2){
		*mayor=n1;
		*menor=n2;
	}else{
		*mayor=n2;
		*menor=n1;
	}
}

void imprimirGoldbach(int n){
	int i;
	if(n<=2 && n%2!=0){
		printf("No es un numero par, no se puede calcular");
		return;
	}
	for(i=1; i<n/2;i++){
		if(primo(i)&& primo(n-i)){
			printf("Suma de goldbach: %d y %d\n",i,n-i);
		}
	}
}

int factorialMasProximo(double n){
	int i;

	for(i=1;factorial(i)<n;i++);
	if(factorial(i)==n){
		return i;
	}else{
		if(factorial(i)-n < n-factorial(i-1)){
			return i;
		}else{
			return i-1;
		}
	}
}
