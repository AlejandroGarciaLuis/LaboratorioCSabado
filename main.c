#include <stdio.h>
int main(){
	
	/* Autor: Alejandro Garcia Luis
	Fecha: 25/Agosto/2019
	Grupo: 
	Horario: S�bados 9-11 am
	Matr�cula: 1846616 */
	
	float x;
	//estas variables son para identificar el resultado de cada ecuaci�n//
	float a,b,c,d;
	
	//aqu� pido el numero que se evaluar� en cada una de las ecucaciones//
	printf("Ingrese el valor a evaluar \n");
	scanf("%f", &x);
	
	//ecuaci�n 1//
	a=((x-1)/4)-((x-5)/36);
	printf("El resultado es %f \n",a);
	
	//ecuaci�n 2//
	b=6*(((x+1)/8)-((2*x-3)/16));
	printf("El resultado es %f \n",b);
	
	//ecuaci�n 3//
	c=(2/3)*(x-(1-((x-2)/3)))+1;
	printf("El resultado es %f \n",c);
	
	//ecuacion 4//
	d=2-((-2*(x+1))- ((x-3)/2));
	printf("El resultado es %f \n",d);
	
	return 0;
}
