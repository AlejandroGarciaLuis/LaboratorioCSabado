#include <stdio.h>
int main(){
	float x;
	//estas variables son para identificar el resultado de cada ecuaci�n//
	float a,b,c,d;
	
	//aqu� pido el numero que se evaluar� en cada una de las ecucaciones//
	printf("Ingrese el valor a evaluar \n");
	scanf("%f", &x);
	
	//ecuaci�n 1//
	a=((x-1)/4)-((x-5)/36);
	printf("El resultado es %f",a);
	
	//ecuaci�n 2//
	b=(((x+1)/8)-((2*x-3)/16))*6;
	printf("El resultado es %f",b);
	
	//ecuaci�n 3//
	c=((x-((x-2)/3))*(2/3))+1;
	printf("El resultado es %f",c);
}
