#include <stdio.h>
double ln(double n)
{ 	double resultado,x;
	x=((n-1)/(n+1)); 
	resultado = x 
	+ x*x*x/3 
	+ x*x*x*x*x/5 
	+ x*x*x*x*x*x*x/7 
	+ x*x*x*x*x*x*x*x*x/9 
	+ x*x*x*x*x*x*x*x*x*x*x/11 
	+ x*x*x*x*x*x*x*x*x*x*x*x*x/13;
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
