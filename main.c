#include <stdio.h>
int main(){
	float x;
	//estas variables son para identificar el resultado de cada ecuación//
	float a,b,c,d;
	
	//aquí pido el numero que se evaluará en cada una de las ecucaciones//
	printf("Ingrese el valor a evaluar \n");
	scanf("%f", &x);
	
	//ecuación 1//
	a=((x-1)/4)-((x-5)/36);
	printf("El resultado para x=1 es %f",a);
	
	//ecuación 2//
	b=(((x+1)/8)-((2*x-3)/16))*6;
	printf("El resultado para x=1 es %f",b);
}
