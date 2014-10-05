#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

double ln(double n)
{	double resultado,x,y,z,c1,c2,c3,c4,c5,c6;
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

int main(int argc, char *argv[]){
	int i;// para guardar el numero ingresado
	double num; //para guardar la cantidad de iteraciones
	int a; //para el ciclo for
	int b; //para leer usando getopt
	int errflg=0; //para gestionar los ingresos incorrectos
	
	char *valorIteracion; //cantidad de iteraciones ingresadas
	char *valorNumero; //numero ingresado
	
	extern int optopt;
	extern char *optarg;
	
	while ((b = getopt (argc, argv, "i:n:")) != -1){
		switch (b){
			case 'i':
				valorIteracion = optarg; //guarda el contenido de lo que sigue a i (argumento)
				i=atoi(valorIteracion); //transforma el valor a entero y lo guarda en i
				break;
			case 'n':
				valorNumero = optarg; //guarda el contenido de lo que sigue a n (argumento) en el comando
				num=atoi(valorNumero); //transforma el valor a entero y lo guarda en n
				break;
			case ':':        //si ingresa cualquier otra cosa 
				fprintf(stderr,"Option -%c requires an operand\n", optopt);
				errflg++;
				break;
			case '?':
				fprintf(stderr,"Unrecognized option: -%c\n", optopt);
				errflg++;
				break;
		}
	}
	if (errflg) {
		fprintf(stderr, "usage: . . . ");
		exit(2);
	}
	else{
	  
	  double total; 
	  for (a=0; a < i; a++){ //todas las iteraciones (i=numero de iteraciones ingresadas)
	      total = ln(num); 
	  }
	printf("%f\n", total); 
	}
} 

