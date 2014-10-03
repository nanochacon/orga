#include <stdio.h>
double ln(double n)
{ 	double resultado,x,y,z,c1,c2,c3,c4,c5,c6;
	y=(n-1);
	z=(n+1);
	x=(y/z);
	c1=0.33333333;
 	c2=0.2;
	c3=0.14285714;
	c4=0.11111111;
	c5=0.09090909;
	c6=0.07692308;
	resultado = x 
	+ x*x*x*c1 
	+ x*x*x*x*x*c2 
	+ x*x*x*x*x*x*x*c3 
	+ x*x*x*x*x*x*x*x*x*c4 
	+ x*x*x*x*x*x*x*x*x*x*x*c5 
	+ x*x*x*x*x*x*x*x*x*x*x*x*x*c6;
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
