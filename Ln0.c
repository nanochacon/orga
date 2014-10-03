#include <stdio.h>
double ln(double n)
{ double resultado; 
	resultado = ((n-1)/(n+1))
 	+ ((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))/3
	+ ((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))/5
	+ ((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))/7
	+ ((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))/9
	+ ((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/	(n+1))*((n-1)/(n+1))/11
	+ ((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))*((n-1)/(n+1))/13;
 	return 2*resultado;
 } 
int main(){ 
	double numero; 
	int i,iteraciones;
	printf("ingrese un numero: "); 
	scanf("%lf",&numero); 
	printf("ingrese cantidad de iteraciones: "); 
	scanf("%i",&iteraciones); 
	double total; 
	for (i=0; i < iteraciones; i++){ 
	total = ln(numero); 
	} 
	printf(" %f\n", total); }
