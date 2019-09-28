#include <stdio.h>
int main(){
	/*Alejandro Garcia Luis
	28/09/2019
	Grupo 008
	Sabados 9am - 11 am
	1846616 */
	
	printf("******ACTIVIDAD 1******* \n\n");
	
	int numeroDeCoches[24]; //variable del arreglo y el total de espacios//
	int x=1,R; //R es la variable para imprimir el valor del arreglo//
	int n;
	
	while(n<23)
	{
		n=n+1;
		numeroDeCoches[n]=n;
	}
	
	R=2;
	numeroDeCoches[R]=57;
	printf("El numero de coches en la hora %d es igual a %d \n\n",R,numeroDeCoches[R]);
	
	R=21;
	numeroDeCoches[R]=57;
	printf("El numero de coches en la hora %d es igual a %d \n\n",R,numeroDeCoches[R]);

	printf("******ACTIVIDAD 2******* \n\n");
	int A=8, B=4;
	
	R=A/B;
	numeroDeCoches[R]=57;
	printf("El numero de coches en la hora %d es igual a %d",R,numeroDeCoches[R]);
	
return 0;	
}
